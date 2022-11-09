#include <iostream> 
#include <iomanip> 
#include "windows.h"
#define _USE_MATH_DEFINES
#include <math.h>


using namespace std;
int f(double x, double e, double z)
{
	int c;
	c = (x * (tan(z)+pow(e,(-x-3)) + pow(cos(180 * M_PI / 180), 2)));
	return c;
}
int main()
{
	int x, e , z;
	cout << "Enter x, e , z" << endl;
	cin >> x >> e >> z;
	cout << f(x, e , z) << endl;
}