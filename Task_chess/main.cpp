#include<iostream>

using namespace std;
//#define HARDCHESS
#define CHESSBOARD
//#define ACADEMY_CHESS

void main()
{
	setlocale(LC_ALL, "");
	int side;
	cout << "������� ������ �������: "; cin >> side;
	cout << endl;
#ifdef HARDCHESS
	for (int i = 0; i < side; i++)// �� ������� �������� ���������
	{
		for (int ii = 0; ii < side; ii++)//�� ������� ��������
		{
			for (int iii = 0; iii < side; iii++)//������
			{
				for (int iiii = 0; iiii < side; iiii++)	cout << (iii % 2 == i % 2 ? "* " : "  ");// ������ ��� �����
			}
			cout << endl;
		}
	}
#endif
#ifdef CHESSBOARD
	setlocale(LC_ALL, "C");
	//�������� C ������ ����������� ���������� ANSI ����� ��� �������� C. 
	//�������� �������� C ������������, ��� ��� ���� ������ char ������������� 1 �����, � �� �������� ������ ������ 256.
	//��� ������� ��������� ����������� ���������� ��������� ����, ���� �� ������� ����, ��� ��� ����� ��� ����������� � ���������.
	cout << char(218); for (int i = 0; i < side * 2; i++)cout << char(196); cout << char(191) << endl;//������ ����� ���������
	for (int ii = 0; ii < side; ii++)//�� �����
	{
		cout << char(179);//������������ ����� � ������
		for (int iii = 0; iii < side; iii++)//������
		{
			cout << (iii % 2 == ii % 2 ? "\xDB\xDB" : "\x20\x20");// ������� ��� �����
		}
		cout << char(179);//������������ ����� � �����
		cout << endl;
	}
	cout << char(192); for (int i = 0; i < side * 2; i++)cout << char(196); cout << char(217);//��������� ����� ���������
#endif
#ifdef ACADEMY_CHESS
	int n;
	cout << "������� ������: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif

}
