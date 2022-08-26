#include <stdio.h>
#include <string.h>

#pragma warning(disable : 4996)

void stringReverse();
void stringSort();

int main()
{
	stringReverse();
	printf("\n\n");
	return 0;
}

void stringReverse()
{
	char userInput[100];
	printf("Please enter a string that you would like to reverse:\n");
	// this says grab everything until we hit a new line character
	scanf("%[^\n]s", userInput);

	int startingPos = -1;
	for (int i = 0; userInput[i] != '\0'; i++, startingPos++);

	printf("Reverse Output:\n");
	for (int i = startingPos - 1; i >= 0; i--)
	{
		printf("%c", userInput[i]);
	}
}

void stringSort()
{
	/*
	* Input number of string: 3
	* Input the 3 strings: zero one two
	* Output: one two three
	* // note this is happening by alpha order
	*/
}