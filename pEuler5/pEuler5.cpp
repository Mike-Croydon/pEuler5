// This program solves Project Euler problem 5: Smallest Multiple
//

#include "pch.h"
#include <iostream>
#include <array>
#include "EulerLib.h"
#include <vector>

using namespace std;

/*
bool divCheck(long long int num)
{
	bool result = true;
	int testVals[] = { 2, 4, 6, 8, 9, 10, 12, 14, 15, 16, 18, 20 };
	int numElems = sizeof(testVals)/sizeof(int);
	for (int i = 0; i < numElems - 1; i++)
	{
		if ((num % testVals[i]) != 0)
		{
			return false;
		}
	}
	return true;
}
*/

int main()
{
	bool isDiv = false;
	int k = 1;
	long long int num = k * 3 * 5 * 7 * 11 * 13 * 17 * 19;
	vector<int> testVals = { 2, 4, 6, 8, 9, 10, 12, 14, 15, 16, 18, 20 };
	while (!isDiv)
	{
		if (EulerLib::Misc::divCheck(num, testVals))
		{
			break;
		}
		k++;
		num = k * 3 * 5 * 7 * 11 * 13 * 17 * 19;
		cout << k << endl;
	}
	
	cout << "The smallest number that is an even multiple of all numbers from 1 to 20 is: " << num;
}
