#include<iostream>
#include<conio.h>
using namespace std;

int StringLength(char str[]);
void ReverseSentence(char[]);

void main()
{
	const int SIZE = 80;
	char String[SIZE] = { 0 };

	cout << "Enter Values In A String:- ";
	cin.getline(String, SIZE, '\n');
	ReverseSentence(String);
	cout << "Reverse Sentence:- " << String << endl;

	_getch();
}

int StringLength(char str[])
{
	int length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return length;
}

void ReverseSentence(char str[])
{
	int count = 0, limit = 0, j = 0;
	int i = StringLength(str);
	limit = i + 1;
	j = i + 1;
	while (i >= 0)
	{
		while (str[i] != ' '&&i != 0)
		{
			i--;
		}
		if (i != 0)
			count = i + 1;
		else
			count = i;
		while (str[count] != ' '&&str[count] != '\0')
		{
			str[limit] = str[count];
			count++;
			limit++;
		}
		str[limit] = ' ';
		limit++;
		i--;
	}
	str[limit] = '\0';
	for (i = 0; str[i] != '\0'; i++)
	{
		str[i] = str[j];
		j++;
	}
}