#include <iostream>
#include <cctype>
#include <string>
#include <fstream>
#include "lab3.h"

using namespace std;

void zd3()
{
	string input;
	string letter;
	int vowels = 0, consonants = 0, other = 0;

	while (cin >> letter)
	{
		if (letter == "q")
			break;

		if (isalpha(letter[0]))
		{
			if (check_for_vowels(letter) == true)
				vowels += 1;
			else
				consonants += 1;
		}
		else
			other += 1;
	}

	cout << "The string contains: " << endl;
	cout << vowels << " words beginning with vowels" << endl;
	cout << consonants << " words beginning with consonants" << endl;
	cout << other << " other words" << endl;
}

void zd4()
{
	char letter;
	unsigned int sum = 0;
	ifstream input;
	input.open("F://input.txt");
	while (input.good())
	{
		input >> letter;
		if (input.eof())
			break;
		sum++;
	}
	cout << "Number of symbols: " << sum << endl;
	input.close();
}

void zd5()
{
	function f1[]{ add, subtract, power };
	double x, y;
	while (true)
	{
		cout << "Enter x & y" << endl;
		cin >> x >> y;
		for (int i = 0; i < 3; i++)
			cout << f1[i](x, y) << endl;
	}
}

int main()
{
	int i;
	cout << "enter number" << endl;
	cin >> i;
	switch (i)
	{
		case 3:
			zd3();
			break;
		case 4:
			zd4();
			break;
		case 5:
			zd5();
			break;
	}
	return 1;
}