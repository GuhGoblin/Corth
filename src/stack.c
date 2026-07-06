// Copyright (c) Ryan Doby under The 3-Clause BSD License
// See the LICENSE file for more info
#include "stack.h"
#include <stdlib.h>

#define MAX_STACK 256

static int stack[MAX_STACK];
static int top;

void push(int value)
{
	if(top >= MAX_STACK)
	{
		printf("stack overflow\n");
		return;
	}

	stack[top] = push_value;
	top++;
}

int pop(void)
{
	if (top == 0)
	{
		printf("stack underflow\n");
		return 0;
	}

	top--;

	int pop_value = stack[top];
	return pop_value;
}

void print_stack()
{
	int size_of_stack = sizeof(stack) / sizeof(stack[0]);

	for (int i = 0; i < size_of_stack; i++)
	{
		printf("%d ", stack[i];	
	}

	printf("\n");
}

