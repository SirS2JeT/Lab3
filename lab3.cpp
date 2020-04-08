#include "lab3.h"
#include <string>

using namespace std;

bool check_for_vowels(string letter)
{
	string check_str = "aeiouyAEIOUY";
	for (int i = 0; check_str[i] != '\0'; i++)
	{
		if (check_str[i] == letter[0])
		{
			return true;
		}
	}
	return false;
}

double calculate(double x, double y, double (*function)(double x, double y))
{
	return function(x, y);
}
double add(double x, double y)
{
	return x + y;
}
double subtract(double x, double y)
{
	return x - y;
}
double power(double x, double y)
{
	for (int i = 0; i < y; i++)
		x *= x;
	return x;
}
