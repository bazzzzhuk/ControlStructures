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
	cout << "Введите температуру воздуха:"; cin >> temperature;
	cout << temperature << endl;
	if (temperature > 50){cout << "Вы на солнце?" << endl;}
	else if (temperature > 40) { cout << "Вы на экваторе" << endl;}
	else if (temperature > 30) { cout << "Жарко" << endl;}
	else if (temperature > 30) { cout << "Хорошее Лето" << endl;}
	else if (temperature > 20) { cout << "Не потею" << endl;}
	else if (temperature > 10) { cout << "Прохладно" << endl;}
	else if (temperature > 0){cout << "Так себе" << endl;}
	else if (temperature > -10){cout << "Холодно" << endl;}
	else if (temperature > -20){cout << "Бррррр..." << endl;}
	else if (temperature > -30){cout << "Не заведётся" << endl;}
	else if (temperature > -40){cout << "Только водка поможет" << endl;}
	else if (temperature > -50){cout << "Струя замерзает" << endl;}
	else if (temperature > -60){cout << "Антарктида?" << endl;}
	else if (temperature > -70){cout << "Вы на северном полюсе!" << endl;}
	else{cout << "Вы в космосе" << endl;}
#endif
#if defined SHOOTER
	char key;
	cout << "Нажмите клавишу (w, s, a, d, r, space, enter, esc - выход) для игры:" << endl;
	do
	{
		key = _getch();
		if (key == 119) cout << "Вперёд!" << endl;
		else if (key == 115) cout << "Назад!" << endl;
		else if (key == 97) cout << "Влево!" << endl;
		else if (key == 100) cout << "Вправо!" << endl;
		else if (key == 32) cout << "Прыжок!" << endl;
		else if (key == 13) cout << "ОГОНЬ!!!" << endl;
		else if (key == 114) cout << "Прикрой! Перезаряжаюсь!" << endl;
		else if (key == 27);
		else cout << "Error..." << endl;
	} while (key != 27);
#endif
#if defined SHOOTER_2
	char key;
	cout << "Нажмите клавишу для игры:" << endl;
	do
	{

		key = _getch();
		switch (key)
		{
		case 119: cout << "Вперёд!" << endl; break;
		case 115: cout << "Назад!" << endl; break;
		case 97: cout << "Влево!" << endl; break;
		case 100: cout << "Вправо!" << endl; break;
		case 32: cout << "Прыжок!" << endl; break;
		case 13: cout << "ОГОНЬ!!!" << endl; break;
		case 114: cout << "Прикрой! Перезаряжаюсь!" << endl; break;
		case 27: break;
		default: cout << "Error..." << endl;
		break;
		}
	} while (key!=27);
#endif

}