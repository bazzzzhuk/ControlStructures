#include<iostream>
using namespace std;
//#define CALC
#define CALC2

//#define PALINDROME

void main()
{
	setlocale(LC_ALL, "");
#if defined CALC
	double a, b;
	double rezult;
	char Operator;
	cout << "�����������:\n\n";
	cout << "������� ��������� : "; cin >> a >> Operator >> b;
	//cout << "������� �����.��������: "; cin >> Operator;
	//cout << "������� ������ �����  : "; cin >> b;
	cout << endl;
	if (Operator == '+') { rezult = a + b;  cout << a << " " << Operator << " " << b << " = " << rezult;}
	else if (Operator == '-') { rezult = a - b; cout << a << " " << Operator << " " << b << " = " << rezult;}
	else if (Operator == '*') { rezult = a * b; cout << a << " " << Operator << " " << b << " = " << rezult;}
	else if (Operator == '/') { rezult = (double)a / b; cout << a << " " << Operator << " " << b << " = " << rezult;}
	else { cout << "����������� ��e�����..." << endl; }
	cout << endl;
#endif

#if defined CALC2
	double a, b;
	char s;
	cout << "������� �������������� ���������: "; cin >> a >> s >> b;
	switch (s)
	{
	case '+': cout << a << " + " << b << " = " << a + b << endl; break;
	case '-': cout << a << " - " << b << " = " << a - b << endl; break;
	case '*': cout << a << " * " << b << " = " << a * b << endl; break;
	case '/': cout << a << " / " << b << " = " << a / b << endl; break;
	default: cout << "Error operator...";
	}

#endif

#if defined PALINDROME
	unsigned long long numberIn; //�������� �����
	unsigned long long copyNumberForCrush;//����� ����������� ��� ��������� ��������� �����
	unsigned long long copyNumberForRemains;//����������� ������� � �������� �� 10 �������� ��������� �����
	int lengthNumber = 0;//��� ������� ����� �����
	cout << "\n�������� �� ���������, ������� �����: "; cin >> numberIn;
	copyNumberForRemains = copyNumberForCrush = numberIn;
	unsigned long long mirrorNumber = 0; //������ ���������� �����, ������ ��� ������� ���������� � ������������ � ��� ����� ����������.
	if(numberIn < ULLONG_MAX)//�������� �� ����� ����� �� ����������� unsigned long long
	{
		do {
			mirrorNumber *= 10;//�������� ������� ����������� ����� (������ ������� ���������, �.�. ��������� ��������� �� ���� - ����)
			copyNumberForRemains = copyNumberForCrush % 10;//���� ��������� �����
			copyNumberForCrush /= 10;//�������� � ����� ��������� �����
			mirrorNumber = mirrorNumber + copyNumberForRemains;//� ����������� ����� ����������� ������ ��������� ����� ��������������� �����
			++lengthNumber;/* ������� ����� ��������� �����*/
			// ��� ������������ ����������� "�����������"
			//cout << " lengthNumber = " << lengthNumber;
			//cout << " copyNumberForCrush = " << copyNumberForCrush;
			//cout << " copyNumberForRemains= " << copyNumberForRemains;
			//cout << " mirror = " << mirrorNumber << endl;
		} while (copyNumberForCrush != 0);//���� �������� ������, �� ����� �����
		if (numberIn == mirrorNumber) { cout << "������� ����� - ���������!\t      " << numberIn << " - ��� ���������!"; }//�������� - ������ �� ������� ����� �� ����� ���������� ����������.
		else { cout << "������� ����� - �� ���������...      " << mirrorNumber << " - ��� �� ���������! "; }
		cout << endl;
	}else { cout << "������� ������� �����..."; }/*���� ������� ����� �������� ������ ��� �������� � ��������� ������ ����������))*/
#endif
}