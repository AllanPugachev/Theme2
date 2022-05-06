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
	int x, y, z, m, r;
	cin >> x >> y >> z >> m;
    x *= 24;
    y *= 24;
    z *= 24;
    switch (m)
    {
    case 1: x *= 31; cout << x << endl; break;
    case 2: x *= 28; cout << x << endl; break;
    case 3: z *= 31; cout << z << endl; break;
    case 4: z *= 30; cout << z << endl; break;
    case 5: z *= 31; cout << z << endl; break;
    case 6: y *= 30; cout << y << endl; break;
    case 7: y *= 31; cout << y << endl; break;
    case 8: y *= 31; cout << y << endl; break;
    case 9: z *= 30; cout << z << endl; break;
    case 10: z *= 31; cout << z << endl; break;
    case 11: z *= 30; cout << z << endl; break;
    case 12: x *= 31; cout << x << endl; break;
    default: cout << "Нет такого месяца\n";
	_getch();
}