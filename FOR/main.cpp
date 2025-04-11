#include<iostream>
using namespace std;
//#define FOR_1
//#define POWER
//#define SIMPLE
#define ROMB_3

void main()
{
	setlocale(LC_ALL, "");
#ifdef FOR_1
	//for (;;)
		//cout << "HEllo FOR 

	/*int n = 5;
	for (
		int i = 0;
		i < n;
		i++)
		cout << i << "\t";*/

	/*int n;
	cout << "Ведите кол-во итераций: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << i << "\t";
	}
	cout << endl;*/
#endif // FOR_1
#ifdef POWER
	double a, N = 1;
	int n;
	cout << "Введите основание: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	if (n < 0) a = 1 / a; n = -n;
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif // POWER
#ifdef SIMPLE
	int n;
	cout << "dd: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		bool simple = true;
		for (int j = 2; j < sqrt(i); j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;
			}
		}
		if (simple)cout << i << "\t";
	}
	cout << endl;
#endif // SIMPLE
#ifdef ROMB_3
	int n = 5;
	for (int i = 0; i < n * 2; i++)
	{
		for (int j = 0; j < n * 2; j++)
		{
			if (i + n == j || j + n == i)cout << "\\";
			else if (i == n - 1 - j || i-n == n*2-j-1)cout << "/";
			else cout << " ";
		}
		cout << endl;
	}

#endif
}
