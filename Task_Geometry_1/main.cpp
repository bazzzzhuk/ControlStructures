#include<iostream>
using namespace std;
#define TASK_SQR_TRNGL
#define ROMB
//#define PLUSMINUS
#define P_M

void main()
{
	setlocale(LC_ALL, "");
	int side, matrix;
	cout << "������� ������ �������: "; cin >> side;
	cout << endl;
	//1. ������� (Square):
	matrix = side * side;
#ifdef TASK_SQR_TRNGL

	for (int i = 1; i <= matrix; i++)
	{
		cout << "* ";
		if (i % side == 0) cout << endl;
	}
	cout << endl;
	//2. ����������� (Triangle_left_down):
	int dot = 1, dots = dot;
	for (int i = 1; i <= matrix; i++)
	{
		cout<< (dots-- > 0? "* ":" ");
		if (i % side == 0) { cout << endl; dots = dot++ + 1; }
	}
	cout << endl;
	//3. ����������� (Triangle_left_up):
	dot = side, dots = dot;
	for (int i = 1; i <= matrix; i++)
	{
		cout<<(dots-- > 0? "* ": " ");
		if (i % side == 0) { cout << endl; dots = dot-- - 1; }
	}
	cout << endl;
	//4. ����������� (Triangle_right_up):
	int spc = 0, spcs = spc;
	for (int i = 1; i <= matrix; i++)
	{
		if (spcs-- > 0) cout << "  "; else cout << "* ";
		if (i % side == 0) { cout << endl; spcs = spc++ + 1; }
	}
	cout << endl;
	//5. ����������� (Triangle_right_down):
	spc = side - 1, spcs = spc;
	for (int i = 1; i <= matrix; i++)
	{
		if (spcs-- > 0) cout << "  "; else cout << "* ";
		if (i % side == 0) { cout << endl; spcs = spc-- - 1; }
	}
	cout << endl;
#endif
#ifdef ROMB
	//6. ����
	int matrix_romb = matrix * 4;//���������� ������ ������
	int romb_line = side * 2;//���� ������
	int dot_1 = side;//��������� ������� �����
	int dot_2 = dot_1 + 1;//��������� ������� �����
	for (int i = 1; i <= matrix_romb; i++)//����: ������ �� ����� for-��...
	{
		if (i == (matrix_romb / 2) + 1)//��������������� ������ ����� �����
		{
			dot_2 = matrix_romb / 2 + 1;
			dot_1 = dot_2 + romb_line - 1;
		}
		if (dot_1 == i && dot_1 != dot_2)//������ ������� �����, ��������� �������� � ����������� ���������� ����� �������
		{
			cout << "/";
			dot_1 = dot_1 + romb_line - 1;
		}
		else if (dot_2 == i)//������ ������� �����
		{
			cout << "\\";
			dot_2 = dot_2 + romb_line + 1;
		}
		else cout << " ";//����� - �����
		if (i % (side * 2) == 0)cout << endl;//������� ������
	}
	cout << endl;
#endif 
#ifdef PLUSMINUS
	// =/-
	bool swtch = 1;
	for (int i = 1; i <= matrix; i++)
	{
		if (swtch) cout << "+ "; else cout << "- ";
		swtch = !swtch;
		if (i % side == 0)
		{
			if (side % 2 == 0)swtch = !swtch;
			cout << endl;
		}
	}
#endif
#ifdef P_M
	for (int i = 0; i < side; i++)
	{
		for (int ii = 0; ii < side; ii++)
		{
			//(i % 2 == ii % 2) ? cout << "+ " : cout << "- ";//
			cout << (i % 2 == ii % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
#endif
}
