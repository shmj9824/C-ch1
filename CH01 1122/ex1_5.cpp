#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

void ex1_5()
{
	char *cName[] = { "Apple","Orange","Pear" };
	float fVal[] = { 1.1f,12.21,123.321 };

	for (int i = 0; i < 3; i++)
	{
		cout << setiosflags(ios::left);		// 靠左對齊, 必須導向 cout
		cout.width(8); cout << cName[i];
		cout << resetiosflags(ios::left)	// 取消靠左對齊,回到靠右對齊
			<< setw(10) << fVal[i] << endl;
	}

	for (int i = 0; i < 3; i++)
	{
		cout.fill('*');			// 設定填滿字元為 *
		cout << setiosflags(ios::right);	//靠右對齊
		cout.width(8); cout << cName[i];
		cout << setiosflags(ios::left);		//靠左對齊
		cout << setfill('^')	// 設定填滿字元為 ^
			 << setw(10) << fVal[i] << endl;
	}
}