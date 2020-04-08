#pragma once
#include <string>


using namespace std;

bool check_for_vowels(string letter);

double calculate(double x, double y, double (*function)(double x, double y));

double add(double x, double y);

double subtract(double x, double y);

double power(double x, double y);

typedef double (*function)(double x, double y);
