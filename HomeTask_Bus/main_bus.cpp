#include<iostream>	
using namespace std;
#define BINGO cout << "ѕоздравл€ем! ” вас счастливый билет!!!" << endl;

void main()
{
	setlocale(LC_ALL, "");
		unsigned long long ticket,	execute;//номер билета; дл€ подсчЄта длины
		int execute_up, execute_down, lngth;//перва€ половина номера билета, втора€ половина; длина
		do//проверка длины номера билета
		{
			lngth = 0;//обнул€ем длину номера билета, если неверна€ длина
			//do {
				cout << "¬ведите номер билета: "; cin >> ticket;
				//if (ticket < ULLONG_MAX) {}
				//else{ ticket = 0; }
			//} while (ticket);
			execute = ticket;
			do{ 
				execute /= 10;
				++lngth;
			} while (execute != 0);
			if (lngth != 6) cout << "Ѕилет имеет шестизначное число!!!" << endl;
		} while (lngth != 6);//пока не будет введено шестизначное число
		execute_up = ticket / 1000;
		execute_down = (((ticket / 1000.) - execute_up) * 1000)+0.00000001;
		execute_up = (execute_up % 10) + ((execute_up % 100 - execute_up % 10) / 10) + ((execute_up % 1000 - execute_up % 100) / 100);
		execute_down = (execute_down % 10) + ((execute_down % 100 - execute_down % 10) / 10) + ((execute_down % 1000 - execute_down % 100) / 100);
		if (execute_up == execute_down) BINGO
		else cout << "»звините, это просто билет..." << endl;
}