#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

extern void ex1_1();
extern void ex1_2();
extern void ex1_3();
extern void ex1_4();
extern void ex1_5();
extern void ex1_6();
extern void ex1_7();
extern void ex1_8();
extern void h1();

int main()
{
	int input;
	do
	{
		system("cls");
		cout << "2017/11/22 C++�}�l\n";
		cout << "01.²���X�J" << endl;
		cout << "02.�R�W�Ŷ�namespace" << endl;
		cout << "03.bool ���O�P C++ ������r" << endl;
		cout << "04.��X�e�ת��B��(Output Width)" << endl;
		cout << "05.�V���V�k���(Alignment)" << endl;
		cout << "06.�]�w��T��(Precision)"<< endl;
		cout << "07.�i���(Radix)" << endl;
		cout << "08.��J�榡" << endl;
		cout << "09.�@�~1" << endl;
		cout << "---------------" << endl;
		cout << "�п�J�n���檺�d�ҩΫ�0����:";
		cin >> input;
		while (getchar() != '\n')
			continue;
		switch (input)
		{
		case 1:
			ex1_1();
			break;
		case 2:
			ex1_2();
			break;
		case 3:
			ex1_3();
			break;
		case 4:
			ex1_4();
			break;
		case 5:
			ex1_5();
			break;
		case 6:
			ex1_6();
			break;
		case 7:
			ex1_7();
			break;
		case 8:
			ex1_8();
			break;
		case 9:
			h1();
			break;
		/*case 10:
			ex10_2dc_ex();
			break;*/
		case 0:
			return 0;
			break;
		default:
			printf("��J���~\n");
		}
		system("pause");
	} while (input != 0);
}