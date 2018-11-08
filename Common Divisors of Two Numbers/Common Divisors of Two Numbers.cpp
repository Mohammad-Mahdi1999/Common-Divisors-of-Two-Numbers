// In the name of God !
//
//
#include "stdafx.h"
#include <iostream>
using namespace std;

void main()
{
	int x, y, i;
	cout << "Enter first number :";
	cin >> x;
	cout << "Enter second number : ";
	cin >> y;
	for (i = 1; i <= x; i++)
		if (x%i == 0 && y%i == 0)
			cout << i << endl;
	cin.get();
	cin.ignore();
}
//Created by /%++;; Mohammad-Mahdi Farah-bakhsh ;;++%\