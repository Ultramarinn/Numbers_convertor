// Numbers_convertor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

void decToHexa(int n)
{
	
	char hexaDeciNum[100];

	
	int i = 0;
	while (n != 0)
	{
		
		int temp = 0;

		 
		temp = n % 16;

		
		if (temp < 10)
		{
			hexaDeciNum[i] = temp + 48;
			i++;
		}
		else
		{
			hexaDeciNum[i] = temp + 55;
			i++;
		}

		n = n / 16;
	}

	
	for (int j = i - 1; j >= 0; j--)
		cout << hexaDeciNum[j];
}


int main()
{
	int n;

	cout << "Enter decimal number: ";
	cin >> n;
	cout << endl;

	decToHexa(n);

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
