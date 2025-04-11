#include<iostream>
#include<conio.h>
#define Escape 27
using namespace std;
//#define WHILE_1
//#define WHILE_2
void main() {
	setlocale(LC_ALL, "");
#if defined WHILE_1
	int i = 0;
	int n = 5;
	while (i < n)
	{

		cout << i << ". lOOps" << endl;
		i++;
	}
#endif
#if defined WHILE_2
	int n;
	cout << "¬ведите кол-во итераций: "; cin >> n;
	while (n-- > 0)
	{
		cout << n << "\t";
	}
	cout << endl;
#endif

	char key;
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
		
	} while (key != Escape);
}