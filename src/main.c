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
			
		int stack[5];
		int top; 
		if(sscanf(buffer, "%d", &number) == 1)
		{
			int int_buffer = atoi(buffer);
			stack[top] = int_buffer;
			top++;
		}

		// int size_of_stack = sizeof(stack)/sizeof(stack[top]);

		if(strcmp(buffer, ".s") == 0)
		{
			for(int i = 0; i < top; i++)
			{
				printf("%d ", stack[i]);
			}
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
