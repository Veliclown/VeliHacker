#include <iostream> 
#include <iomanip> 
#include "windows.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>



using namespace std;

HANDLE hConsole;

int f(double x, double e, double z)
{
	int c;
	c = (x * (tan(z) + pow(e, (-x - 3)) + pow(cos(180 * M_PI / 180), 2)));
	return c;
}
int main()
{
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int x, e, z;
	SetConsoleTextAttribute(hConsole, 2);
	cout << "Enter x, e , z" << endl;
	cin >> x >> e >> z;
	cout << f(x, e, z) << endl;
}