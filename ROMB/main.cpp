#include<iostream>
using namespace std;
//#define ROMB

void main()
{
	setlocale(LC_ALL, "");

	int i, ii, side, size_romb;
	cout << "������� ������� �����: "; cin >> side;
	size_romb = side;
	for (ii = 0; ii < size_romb; ii++)//������ �������� �����
	{
		cout << endl;
		for (i = 0; i < size_romb; ++i) if (i == size_romb-1-ii) cout << "/"; else cout << " ";//����� ������� ����� �����
		for (i; i > 0; i--) if (i == size_romb-ii) cout << "\\"; else cout << " ";//������ ������� ����� �����
	}
	for (ii; ii >= 0; ii--)//��� ����������
	{
		for (i = 0; i < size_romb; ++i) if (i == size_romb - 1-ii) cout << "\\"; else cout << " ";
		for (i; i > 0; i--) if (i == size_romb-ii) cout << "/"; else cout << " ";
		cout << endl;
	}
}
