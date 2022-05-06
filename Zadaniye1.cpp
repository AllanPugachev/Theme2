#include <iostream>
#include <conio.h>
#include <clocale>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian_Russia.1251");
	int k, x;
	cin >> x;
	if (x < 10)
		k = x;
	else k = x % 10;
	if (k == 0 || k == 1 || k == 4 || k == 9)
		cout << "Last digit is square\n";
	else cout << "Last digit isn't square\n";
	_getch();
}