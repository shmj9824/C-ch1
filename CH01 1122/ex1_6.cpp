#include <iostream> 
#include <iomanip>
#include <cstdlib>
using namespace std;

void ex1_6()
{
	float fVal[] = {1.1f,12.21f,123.321f,1234.4321f};
	cout << "��l�ƭ�"; cout << setprecision(8);	// ��� 8 �ӼƦr
	for (int i = 0; i < 4; i++)
		cout << setw(12) << fVal[i];
	cout << endl;
	cout << "3�Ӧr��"; cout << setprecision(3);		// ��� 3 �ӼƦr
	for (int i = 0; i < 4; i++)
		cout << setw(12) << fVal[i];
	cout << endl;
	cout << "��l����" << setiosflags(ios::fixed);	//�T�w����
	for (int i = 0; i < 4; i++)
		cout << setw(12) << fVal[i];
	cout << endl;
	cout << resetiosflags(ios::fixed);	//�M���T�w���ת����
	cout << "��ǰO��"; cout << setiosflags(ios::scientific);	//��ǰO��
	for (int i = 0; i < 4; i++)
		cout << setw(12) << fVal[i];
	cout << endl;
}