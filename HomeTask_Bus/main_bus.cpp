#include<iostream>	
using namespace std;
#define BINGO cout << "�����������! � ��� ���������� �����!!!" << endl;

void main()
{
	setlocale(LC_ALL, "");
		unsigned long long ticket,	execute;//����� ������; ��� �������� �����
		int execute_up, execute_down, lngth;//������ �������� ������ ������, ������ ��������; �����
		do//�������� ����� ������ ������
		{
			lngth = 0;//�������� ����� ������ ������, ���� �������� �����
			//do {
				cout << "������� ����� ������: "; cin >> ticket;
				//if (ticket < ULLONG_MAX) {}
				//else{ ticket = 0; }
			//} while (ticket);
			execute = ticket;
			do{ 
				execute /= 10;
				++lngth;
			} while (execute != 0);
			if (lngth != 6) cout << "����� ����� ������������ �����!!!" << endl;
		} while (lngth != 6);//���� �� ����� ������� ������������ �����
		execute_up = ticket / 1000;
		execute_down = (((ticket / 1000.) - execute_up) * 1000)+0.00000001;
		execute_up = (execute_up % 10) + ((execute_up % 100 - execute_up % 10) / 10) + ((execute_up % 1000 - execute_up % 100) / 100);
		execute_down = (execute_down % 10) + ((execute_down % 100 - execute_down % 10) / 10) + ((execute_down % 1000 - execute_down % 100) / 100);
		if (execute_up == execute_down) BINGO
		else cout << "��������, ��� ������ �����..." << endl;
}