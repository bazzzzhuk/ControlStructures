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
	/*  Написать программу, которая вычисляет факториал числа, введенного с клавиатуры.
		Фактроиал - это произведение ряда чисел от 0 до указанного, например:
		5! = 1*2*3*4*5
	*/
	unsigned long long number_f, factorial;
	cout << "Вычисление факториала.\nВведите числo  : "; cin >> number_f;
	factorial = number_f;
	while (number_f > 1) factorial *= --number_f;//cout << factorial << endl;
	if (factorial != 0) { cout << "Факториал равен: " << factorial << endl; }
	else {
		cout << "Факториал равен нулю, либо слишком большое введёное число!!!" << endl;
	}
	cout << endl;
#endif
#if defined EXPONENTA
	/*
	Написать программу, которая возводит указанное число в указанную степень,
	основание и показатель степени вводятся с клавиатуры;
	*/
	int number, exp, n;
	cout << "Возведения в степень\nВведите числo  : "; cin >> number;
	cout << "Введите степень: "; cin >> exp;
	n = number;
	while (exp > 1)
	{
		number *= n;
		--exp;
	}
	cout << "равен: " << number << endl;
	cout << endl;
#endif
#if defined ASCII
	cout << "4. Вывести на экран таблицу ASCII-символов по 16 символов в строке\n" << endl;
	setlocale(0, "C");
	int symbol = 0; //решил всю белиберду не выводить...
	do
	{
		cout << symbol << "= " << char(symbol) << "\t"<<endl;//с табуляцией больше похоже на таблицу
		++symbol;
		//if (symbol % 16 == 0)cout << "\n" << endl;//после каждого 16 символа переход на другую строку 2 раза для читаемости
	} while (symbol != 1024);
	//cout << endl;
	//cout << endl;
#endif
#if defined FIBONA44I
	cout << "Задание: Вывести на экран ряд Фибоначчи до указанного предела.\n";
	unsigned long long end_fibona44i, temp_value, fibona44i_1 = 0, fibona44i_2 = 1;
	cout << "Введите предел счёта последовательности Фибоначчи: "; cin >> end_fibona44i;
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
		cout << fibona44i_2 << " < следующее число в последовательности Фибоначчи больше введенного предела!" << endl;
	}
	else { cout << "Введёное число слишком велико..." << endl; }
	cout << endl;
#endif
#if defined FIBONA44I_2
	cout << "Вывести на экран заданное количество чисел из ряда Фибоначчи.\n" << endl;
	//Понял задание по-своему = усложнил))
	unsigned long long start_fibona44i, temp_value2, fibona44i_12 = 0, fibona44i_22 = 1; //с какого числа, временная переменная для переброски значения, старт последовательности сложно разместить в цикл.
	int iter_fibona44i; //заданное количество чисел
	int iter_on;//для сообщения в первом найденном числе = введеному.
	int numeration = 1;
	cout << "Введите с какого числа и количество чисел из ряда Фибоначии через пробел: "; cin >> start_fibona44i >> iter_fibona44i;//но оно может быть задано с какого-то числа, ближайшего в классической последовательности Фибоначчи.
	cout << endl;
	iter_on = iter_fibona44i;
	if (start_fibona44i < ULLONG_MAX)//проверка на гигантизм
	{
		if (start_fibona44i == fibona44i_12)
		{
			cout << numeration << ". " << fibona44i_12 << " < - Ближайшее число в ряде Фибоначчи" << endl;
			++numeration; --iter_fibona44i;
		}//печатаем и стоп если ноль.
		while (iter_fibona44i != 0)
		{
			if (start_fibona44i <= fibona44i_22)//проблема лишь с единицами - их две)
			{
				cout << numeration << ". " << fibona44i_22;
				if (iter_on == iter_fibona44i && start_fibona44i != 0)cout << " < - Ближайшее число в ряде Фибоначчи";//чтобы не выводило дважды если с нуля старт
				cout << endl;
				--iter_fibona44i; ++numeration;
			}
			temp_value2 = fibona44i_22;
			fibona44i_22 += fibona44i_12;
			fibona44i_12 = temp_value2;
		}
	}
	else { cout << "Введёное число слишком велико..." << endl; }
#endif
}
h