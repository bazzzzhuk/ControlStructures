#include<iostream>

using namespace std;
//#define HARDCHESS
#define CHESSBOARD
//#define ACADEMY_CHESS

void main()
{
	setlocale(LC_ALL, "");
	int side;
	cout << "Введите размер стороны: "; cin >> side;
	cout << endl;
#ifdef HARDCHESS
	for (int i = 0; i < side; i++)// по большим строчным квадратам
	{
		for (int ii = 0; ii < side; ii++)//по строкам квадрата
		{
			for (int iii = 0; iii < side; iii++)//строка
			{
				for (int iiii = 0; iiii < side; iiii++)	cout << (iii % 2 == i % 2 ? "* " : "  ");// чёрное или белое
			}
			cout << endl;
		}
	}
#endif
#ifdef CHESSBOARD
	setlocale(LC_ALL, "C");
	//Значение C задает минимальную подходящую ANSI среду для переноса C. 
	//Языковой стандарт C предполагает, что все типы данных char соответствуют 1 байту, а их значение всегда меньше 256.
	//При запуске программы выполняется эквивалент оператора выше, если не указано иное, это нам нужно для возвращения к кодировке.
	cout << char(218); for (int i = 0; i < side * 2; i++)cout << char(196); cout << char(191) << endl;//первая линия оконтовки
	for (int ii = 0; ii < side; ii++)//по рядам
	{
		cout << char(179);//вертикальная линия в начале
		for (int iii = 0; iii < side; iii++)//строка
		{
			cout << (iii % 2 == ii % 2 ? "\xDB\xDB" : "\x20\x20");// квадрат или пусто
		}
		cout << char(179);//вертикальная линия в конце
		cout << endl;
	}
	cout << char(192); for (int i = 0; i < side * 2; i++)cout << char(196); cout << char(217);//последняя линия оконтовки
#endif
#ifdef ACADEMY_CHESS
	int n;
	cout << "Введите размер: "; cin >> n;
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
