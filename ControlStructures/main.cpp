#include<iostream>
#include<conio.h>
using namespace std;

//#define TEMPERATURE
//#define SHOOTER
//#define SHOOTER_2

void main() {
	setlocale(LC_ALL, "");
#if defined TEMPERATURE
	cout << "ControlStructures" << endl;
	int temperature;
	cout << "������� ����������� �������:"; cin >> temperature;
	cout << temperature << endl;
	if (temperature > 50){cout << "�� �� ������?" << endl;}
	else if (temperature > 40) { cout << "�� �� ��������" << endl;}
	else if (temperature > 30) { cout << "�����" << endl;}
	else if (temperature > 30) { cout << "������� ����" << endl;}
	else if (temperature > 20) { cout << "�� �����" << endl;}
	else if (temperature > 10) { cout << "���������" << endl;}
	else if (temperature > 0){cout << "��� ����" << endl;}
	else if (temperature > -10){cout << "�������" << endl;}
	else if (temperature > -20){cout << "������..." << endl;}
	else if (temperature > -30){cout << "�� ��������" << endl;}
	else if (temperature > -40){cout << "������ ����� �������" << endl;}
	else if (temperature > -50){cout << "����� ���������" << endl;}
	else if (temperature > -60){cout << "����������?" << endl;}
	else if (temperature > -70){cout << "�� �� �������� ������!" << endl;}
	else{cout << "�� � �������" << endl;}
#endif
#if defined SHOOTER
	char key;
	cout << "������� ������� (w, s, a, d, r, space, enter, esc - �����) ��� ����:" << endl;
	do
	{
		key = _getch();
		if (key == 119) cout << "�����!" << endl;
		else if (key == 115) cout << "�����!" << endl;
		else if (key == 97) cout << "�����!" << endl;
		else if (key == 100) cout << "������!" << endl;
		else if (key == 32) cout << "������!" << endl;
		else if (key == 13) cout << "�����!!!" << endl;
		else if (key == 114) cout << "�������! �������������!" << endl;
		else if (key == 27);
		else cout << "Error..." << endl;
	} while (key != 27);
#endif
#if defined SHOOTER_2
	char key;
	cout << "������� ������� ��� ����:" << endl;
	do
	{

		key = _getch();
		switch (key)
		{
		case 119: cout << "�����!" << endl; break;
		case 115: cout << "�����!" << endl; break;
		case 97: cout << "�����!" << endl; break;
		case 100: cout << "������!" << endl; break;
		case 32: cout << "������!" << endl; break;
		case 13: cout << "�����!!!" << endl; break;
		case 114: cout << "�������! �������������!" << endl; break;
		case 27: break;
		default: cout << "Error..." << endl;
		break;
		}
	} while (key!=27);
#endif

}