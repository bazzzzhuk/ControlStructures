#include<iostream>
using namespace std;
//#define FACTORIAL
//#define EXPONENTA
#define ASCII
//#define FIBONA44I
//#define FIBONA44I_2

void main()
{
	setlocale(LC_ALL, "");
#if defined FACTORIAL
	/*  �������� ���������, ������� ��������� ��������� �����, ���������� � ����������.
		��������� - ��� ������������ ���� ����� �� 0 �� ����������, ��������:
		5! = 1*2*3*4*5
	*/
	unsigned long long number_f, factorial;
	cout << "���������� ����������.\n������� ����o  : "; cin >> number_f;
	factorial = number_f;
	while (number_f > 1) factorial *= --number_f;//cout << factorial << endl;
	if (factorial != 0) { cout << "��������� �����: " << factorial << endl; }
	else {
		cout << "��������� ����� ����, ���� ������� ������� ������� �����!!!" << endl;
	}
	cout << endl;
#endif
#if defined EXPONENTA
	/*
	�������� ���������, ������� �������� ��������� ����� � ��������� �������,
	��������� � ���������� ������� �������� � ����������;
	*/
	int number, exp, n;
	cout << "���������� � �������\n������� ����o  : "; cin >> number;
	cout << "������� �������: "; cin >> exp;
	n = number;
	while (exp > 1)
	{
		number *= n;
		--exp;
	}
	cout << "�����: " << number << endl;
	cout << endl;
#endif
#if defined ASCII
	cout << "4. ������� �� ����� ������� ASCII-�������� �� 16 �������� � ������\n" << endl;
	setlocale(0, "C");
	int symbol = 0; //����� ��� ��������� �� ��������...
	do
	{
		cout << symbol << "= " << char(symbol) << "\t"<<endl;//� ���������� ������ ������ �� �������
		++symbol;
		//if (symbol % 16 == 0)cout << "\n" << endl;//����� ������� 16 ������� ������� �� ������ ������ 2 ���� ��� ����������
	} while (symbol != 1024);
	//cout << endl;
	//cout << endl;
#endif
#if defined FIBONA44I
	cout << "�������: ������� �� ����� ��� ��������� �� ���������� �������.\n";
	unsigned long long end_fibona44i, temp_value, fibona44i_1 = 0, fibona44i_2 = 1;
	cout << "������� ������ ����� ������������������ ���������: "; cin >> end_fibona44i;
	if (end_fibona44i < ULLONG_MAX)
	{
		cout << fibona44i_1 << endl;
		while (end_fibona44i >= fibona44i_2)
		{
			cout << fibona44i_2 << endl;
			temp_value = fibona44i_2;
			fibona44i_2 += fibona44i_1;
			fibona44i_1 = temp_value;
		}
		cout << fibona44i_2 << " < ��������� ����� � ������������������ ��������� ������ ���������� �������!" << endl;
	}
	else { cout << "������� ����� ������� ������..." << endl; }
	cout << endl;
#endif
#if defined FIBONA44I_2
	cout << "������� �� ����� �������� ���������� ����� �� ���� ���������.\n" << endl;
	//����� ������� ��-������ = ��������))
	unsigned long long start_fibona44i, temp_value2, fibona44i_12 = 0, fibona44i_22 = 1; //� ������ �����, ��������� ���������� ��� ���������� ��������, ����� ������������������ ������ ���������� � ����.
	int iter_fibona44i; //�������� ���������� �����
	int iter_on;//��� ��������� � ������ ��������� ����� = ���������.
	int numeration = 1;
	cout << "������� � ������ ����� � ���������� ����� �� ���� ��������� ����� ������: "; cin >> start_fibona44i >> iter_fibona44i;//�� ��� ����� ���� ������ � ������-�� �����, ���������� � ������������ ������������������ ���������.
	cout << endl;
	iter_on = iter_fibona44i;
	if (start_fibona44i < ULLONG_MAX)//�������� �� ���������
	{
		if (start_fibona44i == fibona44i_12)
		{
			cout << numeration << ". " << fibona44i_12 << " < - ��������� ����� � ���� ���������" << endl;
			++numeration; --iter_fibona44i;
		}//�������� � ���� ���� ����.
		while (iter_fibona44i != 0)
		{
			if (start_fibona44i <= fibona44i_22)//�������� ���� � ��������� - �� ���)
			{
				cout << numeration << ". " << fibona44i_22;
				if (iter_on == iter_fibona44i && start_fibona44i != 0)cout << " < - ��������� ����� � ���� ���������";//����� �� �������� ������ ���� � ���� �����
				cout << endl;
				--iter_fibona44i; ++numeration;
			}
			temp_value2 = fibona44i_22;
			fibona44i_22 += fibona44i_12;
			fibona44i_12 = temp_value2;
		}
	}
	else { cout << "������� ����� ������� ������..." << endl; }
#endif
}
h