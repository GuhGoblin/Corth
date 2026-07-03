#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
	bool running = true;
	float version = 0.0;

	char buffer[200];
	int n = 20;

	printf("Corth Version  %.2f\n", version);
	printf("Type 'bye' to exit\n");

	while(running == 1)
	{
		fgets(buffer, n, stdin);
		for(int i = 0; buffer[i] != '\0'; i++)
		{
			if (buffer[i] == '\n')
			{
				buffer[i] = '\0';
				break;
			}
		}

		if (strcmp(buffer, "bye") == 0)
		{
			running = 0;
		} 
	}
	return 0;
}
