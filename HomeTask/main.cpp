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
	cout << "Калькулятор:\n\n";
	cout << "Введите выражение : "; cin >> a >> Operator >> b;
	//cout << "Введите матем.операцию: "; cin >> Operator;
	//cout << "Введите второе число  : "; cin >> b;
	cout << endl;
	if (Operator == '+') { rezult = a + b;  cout << a << " " << Operator << " " << b << " = " << rezult;}
	else if (Operator == '-') { rezult = a - b; cout << a << " " << Operator << " " << b << " = " << rezult;}
	else if (Operator == '*') { rezult = a * b; cout << a << " " << Operator << " " << b << " = " << rezult;}
	else if (Operator == '/') { rezult = (double)a / b; cout << a << " " << Operator << " " << b << " = " << rezult;}
	else { cout << "Неизвестный опeратор..." << endl; }
	cout << endl;
#endif

#if defined CALC2
	double a, b;
	char s;
	cout << "Введите арифметическое выражение: "; cin >> a >> s >> b;
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
	unsigned long long numberIn; //Вводимое число
	unsigned long long copyNumberForCrush;//Число необходимое для отсекание последних чисел
	unsigned long long copyNumberForRemains;//Результатом деления с остатком на 10 является последнее число
	int lengthNumber = 0;//для расчёта длины числа
	cout << "\nПроверка на Палиндром, введите число: "; cin >> numberIn;
	copyNumberForRemains = copyNumberForCrush = numberIn;
	unsigned long long mirrorNumber = 0; //Сделаю зеркальное число, потому что принцип Палиндрома в зеркальности и так проще сравнивать.
	if(numberIn < ULLONG_MAX)//Проверка на длину числа не превышающую unsigned long long
	{
		do {
			mirrorNumber *= 10;//сдвигаем регистр зеркального числа (первый регистр оставляем, т.к. результат умножения на ноль - ноль)
			copyNumberForRemains = copyNumberForCrush % 10;//берём последнюю цифру
			copyNumberForCrush /= 10;//отсекаем у числа последнюю цифру
			mirrorNumber = mirrorNumber + copyNumberForRemains;//к зеркальному числу приписываем взятую последнюю цифру экзекутируемого числа
			++lengthNumber;/* Считаем длину введеного числа*/
			// Для тестирования использовал "Наглядность"
			//cout << " lengthNumber = " << lengthNumber;
			//cout << " copyNumberForCrush = " << copyNumberForCrush;
			//cout << " copyNumberForRemains= " << copyNumberForRemains;
			//cout << " mirror = " << mirrorNumber << endl;
		} while (copyNumberForCrush != 0);//Если отсекать нечего, то конец цикла
		if (numberIn == mirrorNumber) { cout << "Введёное число - Палиндром!\t      " << numberIn << " - оно зеркально!"; }//проверка - похоже ли введёное число со своим зеркальным отражением.
		else { cout << "Введёное число - не Палиндром...      " << mirrorNumber << " - оно не зеркально! "; }
		cout << endl;
	}else { cout << "Слишком большое число..."; }/*тест больших чисел заставил ввести эту проверку и увеличить размер переменной))*/
#endif
}