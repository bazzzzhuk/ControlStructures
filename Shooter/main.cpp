#include<iostream>
#include<conio.h>
using namespace std;


//#define SHOOTER
//#define SHOOTER_2

void main() {
	setlocale(LC_ALL, "");
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
	cout << "Нажмите клавишу (w, s, a, d, r, space, enter, esc - выход) для игры:" << endl;
	do{
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
			break;}
	} while (key != 27);
#endif

}