// Check Prime Number.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, i;
	bool isPrime = true;
	int number = -1;

cinbhai:

	cout << "Enter a positive integer: ";
	cin >> n;

	for (i = 2; i <= n / 2; ++i)
	{
		if (n %i == 0) {
			isPrime = false;
			break;
		}
	}
	if (isPrime)
		if (n < 0) {
			cout << "Please Enter Postitive number\n";
			goto cinbhai;
		}
		else 
			cout << "This is a Prime Number\n";

	else
		cout << "This is not a Prime Number\n";

    return 0;
}

