#include<iostream>
using namespace std;

//#define PALINDROM
#define FACTORIAL
//#define EXPONENTA
//#define ASCII
//#define FIBONA44I
//#define FIBONA44I_2
//#define PRIME
//#define PERFECT
//#define PIFAGOR

void main()
{
	setlocale(LC_ALL, "");
#ifdef PALINDROM
	unsigned long long number, copyNumber, mirror = 0;
	cout << "������� �����:    "; cin >> number;
	copyNumber = number;
	for (copyNumber; copyNumber != 0; copyNumber = copyNumber / 10)
	{
		mirror *= 10;
		mirror += copyNumber % 10;
	}
	if (number == mirror)cout << "������� ����� - ���������!\nO�� ���������:    " << number;
	else cout << "������� ����� - �� ���������...\n��� �� ���������: " << mirror;
	cout << endl;
#endif // PALINDROM
#ifdef FACTORIAL
	unsigned long long number_f, factorial;
	cout << "���������� ����������.\n������� ����o  : "; cin >> number_f;
	factorial = number_f;
	for (--number_f; number_f > 0; factorial *= number_f--);
	cout << "��������� �����: " << factorial << endl;
#endif // FACTORIAL
#ifdef EXPONENTA
	int number, number2, n;
	cout << "���������� � �������\n������� ����o  : "; cin >> number;
	cout << "������� �������: "; cin >> n;
	number2 = number;
	cout << number2 << " � " << n << "  ������� = ";//���� �� ������� ����� ���������� �� "�������" - ������� � ���� ��� �� "��������"...
	for (n; n > 1; --n) number *= number2;
	cout << number << endl;//... � �������� � ����� ���������.
	cout << endl;
#endif // EXPONENTA
#ifdef ASCII
	for (int i = 32; i <= 127; ++i)
	{
		cout << char(i) << "\t";//� ���������� ������ ������ �� �������
		if (i % 16 == 0)cout << "\n" << endl;//����� ������� 16 ������� ������� �� ������ ������ 2 ���� ��� ����������
	}
	cout << endl;
#endif // ASCII
#ifdef FIBONA44I
	cout << "�������: ������� �� ����� ��� ��������� �� ���������� �������.\n";//���� �������, ��� ������ - ��� ����� � ���� ���������.
	unsigned long long end_fib, temp_value, fib_1 = 0, fib_2 = 1;//������; ��������� ���������� ��� ������������� ������� ����� � ������; ��� ����� �� ������� ���������� ������������������ ���������.
	cout << "������� ������ ����� ������������������ ���������: "; cin >> end_fib;
	if (end_fib < ULLONG_MAX)
	{
		cout << fib_1 << endl;
		for (fib_2; end_fib >= fib_2; temp_value = fib_2, fib_2 += fib_1, fib_1 = temp_value)//�������� �������, �� ���������� ���������, � �������� �� ����� ������ ����� �������...
		{
			cout << fib_2 << endl;
			//temp_value = fib_2;// ...���� ���; ��� ��� ������� �����������
			//fib_2 += fib_1;
			//fib_1 = temp_value;
		}
		cout << fib_2 << " < ��������� ����� � ������������������ ��������� ������ ���������� �������!" << endl;
	}
	else { cout << "������� ����� ������� ������..." << endl; }
	cout << endl;

#endif // FIBONA44I
#ifdef FIBONA44I_2
	unsigned long long temp_value2, num_0 = 0, num_1 = 1;
	int i;
	cout << "������� ���������� ����� �� ���� ���������: "; cin >> i;
	cout << endl;
	cout << num_0 << endl;
	for (--i; i > 0; --i)
	{
		cout << num_1 << endl;
		temp_value2 = num_1;
		num_1 += num_0;
		num_0 = temp_value2;
	}
#endif // FIBONA44I_2
#ifdef PRIME
	int ii;
	bool prime = 1;
	for (int i = 1; i < INT_MAX; ++i)
	{
		prime = 1;
		ii = 2;//�� 1 �� �����...
		do {
			if (i % ii == 0) prime = 0; else ++ii;//���� ������� ��� �������, �� �� ������� �����
		} while (prime && ii < i);//...� �� ���� �����
		if (prime || i < 3)cout << i << endl;
	}
#endif // PRIME
#ifdef PERFECT
	int sum;
	for (int i = 1; i < INT_MAX; ++i)
	{
		//cout << i << endl;
		sum = 0;
		//cout << "i= " << i << endl;
		for (int ii = 1; ii < i/2+1; ++ii)// FOR ��������� int'om, � ����� ������ 4 ��������� ����� ����� ���� ���������...
		{
			if (i % ii == 0)sum += ii;
		}
		if (sum == i)cout << "����������� �����: " << i << endl;
	}
#endif // PERFECT
#ifdef PIFAGOR
	for (int i = 0; i <= 9; ++i)
	{
		if (i == 0) cout << "\t"; else cout << i << "\t";
		for (int ii = 1; ii <= 9; ++ii)
		{
			if (i == 0) cout << ii << "\t";
			else cout << ii * i << "\t";
		}
		cout << "\n" << endl;
	}
#endif // PIFAGOR

}