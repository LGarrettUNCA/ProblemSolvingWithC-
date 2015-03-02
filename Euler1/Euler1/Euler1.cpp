// Euler1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int CalculateSumON(int iterations)
{
	int sum = 0;

	for (int i = 0; i <= iterations; i++)
	{
		if ((i % 3 == 0) || (i % 5) == 0)
			sum += i;
	}

	return sum;
}

int CalculateSumO1(int numberToMultiply, int highestNumberPossible)
{
	int n = highestNumberPossible / numberToMultiply;

	int sum = numberToMultiply * n * (n + 1) / 2;

	return sum;
}

int main()
{
	int HighestNumberPossible = 999;

	std::cout << CalculateSumON(HighestNumberPossible) << "\n";
	std::cout << CalculateSumO1(3, HighestNumberPossible) + CalculateSumO1(5, HighestNumberPossible) - CalculateSumO1(15, HighestNumberPossible) << "\n";
}


