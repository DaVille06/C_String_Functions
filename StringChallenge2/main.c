#include <stdio.h>
#include <string.h>

#define NUMBER_OF_STRINGS 10
#define MAX_STRING_LENGTH 10

#pragma warning(disable : 4996)

void stringReverse();
void stringSort();

int main()
{
	stringReverse();
	printf("\n\n");
	stringSort();
	return 0;
}

void stringReverse()
{
	char userInput[100];
	printf("Please enter a string that you would like to reverse:\n");
	// this says grab everything until we hit a new line character
	scanf("%[^\n]s", userInput);

	int startingPos = 0;
	for (int i = 0; userInput[i] != '\0'; i++, startingPos++);

	printf("Reverse Output:\n");
	for (int i = startingPos - 1; i >= 0; i--)
	{
		printf("%c", userInput[i]);
	}
}

void stringSort()
{
	int numOfWords = 0;
	printf("Please enter the number of strings you would like to sort (max 10): ");
	scanf("%d", &numOfWords);

	if (numOfWords != 0)
	{
		// don't like these hard coded constraints
		char words[NUMBER_OF_STRINGS][MAX_STRING_LENGTH];
		printf("Please enter your %d strings\n", numOfWords);
		// collect the strings
		for (int i = 0; i < numOfWords; i++)
		{
			scanf("%s", words[i]);
		}

		// do bubble sort
		for (int i = 1; i <= numOfWords; i++)
		{
			for (int j = 0; j < numOfWords - 1; j++)
			{
				if (strcmp(words[j], words[j + 1]) > 0)
				{
					char temp[MAX_STRING_LENGTH];
					strcpy(temp, words[j]);
					strcpy(words[j], words[j + 1]);
					strcpy(words[j + 1], temp);
				}
			}
		}

		// output
		printf("\nSorted Output:\n");
		for (int i = 0; i < numOfWords; i++)
		{
			printf(" %s ", words[i]);
		}
	}
	else
	{
		printf("You have chosen not to sort any strings...odd...\n");
	}
}