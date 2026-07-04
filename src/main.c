// Copyright (c) Ryan Doby under The 3-Clause BSD License
// See the LICENSE file for more info
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	bool running = true;
	// Version should prob be made a char but I made it float so deal with it
	float version = 0.0;

	char buffer[200];
	// n is the max number of chars, I have called it n which is a bad var name I know
	int n = 20;
	int number;

	int stack[5];
	int top = 0; 

	printf("Corth Version  %.2f\n", version);
	printf("Type 'bye' to exit\n");

	while(running == 1)
	{
		// Gets rid of the \n in the users input so commands can work
		fgets(buffer, n, stdin);
		for(int i = 0; buffer[i] != '\0'; i++)
		{
			if (buffer[i] == '\n')
			{
				buffer[i] = '\0';
				break;
			}
		}
			
		if(sscanf(buffer, "%d", &number) == 1)
		{
			int int_buffer = atoi(buffer);
			stack[top] = int_buffer;
			top++;
		}

		if(strcmp(buffer, "+") == 0) 
		{
			if(top < 2)
			{
				printf("Not 2 numbers in stack!!");
			}

			else
			{
				int a = stack[top - 1];
				int b = stack[top - 2];

				top = top - 2;

				int result = b + a;
				stack[top] = result;
				top++;
			}
		}

		if(strcmp(buffer, ".s") == 0)
		{
			printf("<%d> ", top);

			for(int i = 0; i < top; i++)
			{
				printf("%d ", stack[i]);
			}
			printf("\n");
		}
		
		// Exits user when they type bye
		if (strcmp(buffer, "bye") == 0)
		{
			running = 0;
			printf("Goodbye!\n");
		} 


	}
	return 0;
}
