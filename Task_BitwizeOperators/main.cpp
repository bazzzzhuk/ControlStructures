#include<iostream>
using namespace std;
#define VARIABLE_MIX

void main()
{
	setlocale(LC_ALL, "");
#ifdef VARIABLE_MIX

	int a = 3, b = 66;
	
	a ^= b;
	b ^= a;
	a ^= b;
	cout <<a << " " << b;
	
#endif
}
