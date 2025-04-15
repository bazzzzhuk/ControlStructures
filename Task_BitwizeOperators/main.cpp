#include<iostream>
using namespace std;
#define VARIABLE_MIX
#define TRIANGLE_PASCAL


void main()
{
	setlocale(LC_ALL, "");
#ifdef VARIABLE_MIX
	/* Перебирал варианты с операторами на бумажке, пока не нашёл решение
	a = 0011
	b = 0110

	a = a ^ b
	a = 0101
	b = 0110

	b = b ^ aа
	b = 0011
	a = 0101

	a = a ^ b
	a = 0110
	b = 0011
	*/
	int a = 3, b = 6;
	cout << a << " " << b << endl;
	a ^= b ^= a ^= b;
	cout << a << " " << b << endl;
#endif
#ifdef TRIANGLE_PASCAL
	int num_pascal = 1;
	int n; cout << "Введите глубину: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int num_pascal = 1;
		for (int ii = 0; ii < n - i; ii++)cout << " ";
		for (int iii = 1; iii <= i; iii++)
		{
			cout << num_pascal << " ";
			num_pascal = num_pascal*(i - iii) / iii;//Математика - дремучий лес...Интернет - фонарь в этом беспросветном царстве.
		}
		cout << endl;
	}
#endif
}
