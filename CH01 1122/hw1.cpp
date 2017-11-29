#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

void h1()
{
	int i,j;
	//第一項
	for (i = 0; i < 7; i++)
	{
		cout << setw(8 - i);
		for (j = 0; j < (i * 2 + 1); j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

	//第二項
	cout << setw(8) << "*" << endl;
	int y = 1;
	for (i = 0; i < 6; i++)
	{
		cout << setiosflags(ios::right);
		cout << setw(7-i);
		for (j = 0; j < y; j++)
		{
			cout << "*";
		}
		cout << setiosflags(ios::left);
		cout << setw(2);
		for (j = 0; j < y; j++)
		{
			cout << "*";
		}
		y++;
		cout << endl;
	}
	cout << endl;

	//第三項
	for (i = -3; i < 4; i++)
	{
		cout << setw(5 + abs(i));
		for (j = 1; j <= (7-abs(i)*2); j++)
			cout << "*";
		cout << endl;
	}
	cout << endl;

	//第四項
	for (i = -3; i < 4; i++)
	{
		cout << setw(5 + abs(i));
		cout << "*";
		cout << setw(6 - abs(i) * 2);
		if(abs(i) <= 2)
			cout << "*";
		cout << endl;
	}
	cout << endl;
}