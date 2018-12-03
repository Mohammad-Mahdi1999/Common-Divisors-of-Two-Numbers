// In the name of God !
//
//
#include "stdafx.h"
#include <iostream>
using namespace std;
void codiv(int x, int y)
{
	int i;
	for (i = 1; i <= x; i++)
		if (x%i == 0 && y%i == 0)
			cout << i << endl;
}
void main()
{
	int x, y;
	cout << "Enter first number :";
	cin >> x;
	cout << "Enter second number : ";
	cin >> y;
	codiv(x, y);
	cout << "Press Enter key to exit . . .";
	cin.get();
	cin.ignore();
}
//Created by /%++;; Mohammad-Mahdi Farah-bakhsh ;;++%\