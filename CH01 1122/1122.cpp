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
		cout << "2017/11/22 C++開始\n";
		cout << "01.簡單輸出入" << endl;
		cout << "02.命名空間namespace" << endl;
		cout << "03.bool 型別與 C++ 的關鍵字" << endl;
		cout << "04.輸出寬度的運用(Output Width)" << endl;
		cout << "05.向左向右對齊(Alignment)" << endl;
		cout << "06.設定精確度(Precision)"<< endl;
		cout << "07.進位制(Radix)" << endl;
		cout << "08.輸入格式" << endl;
		cout << "09.作業1" << endl;
		cout << "---------------" << endl;
		cout << "請輸入要執行的範例或按0結束:";
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
			printf("輸入錯誤\n");
		}
		system("pause");
	} while (input != 0);
}