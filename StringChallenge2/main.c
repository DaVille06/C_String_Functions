#include <stdio.h>
#include <string.h>

#pragma warning(disable : 4996)

// read input from keyboard
// use strlen to reverse
void stringReverse();

int main()
{
	stringReverse();
	return 0;
}

void stringReverse()
{
	// would like a way to make this an unknown length instead of hard coded
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