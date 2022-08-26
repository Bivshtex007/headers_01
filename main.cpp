#include <iostream>
#include <cmath>
#include "add.h"
using namespace std;

int main()
{
	int a, b;
	cout << "Enter a..." << endl;
	cin >> a;
	cout << "Enter b..." << endl;
	cin >> b;
	cout << "a + b = " << add(a, b) << endl;

}