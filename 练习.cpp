#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <ctime>
using namespace std;
#define max 1

int main()
{
	/*const int lx_1 = 10;
	int b = 32767;
	cout << "a=" << lx_1<< "��" << endl;
	cout << "b=" << b << endl;
	cout << "bռ�õĿռ��ǣ�" << sizeof(b) << endl;
	
	float f1 = 3.1415926f;
	char e = 48;
	
	cout << "\\" << endl;
	char a = 'A';
	string str = "0";
	cout << "str��ֵΪ" << str << endl; 
	cin >> str;
	cout << "str��ֵΪ" << str << endl;

	system("pause");*/
	
	/*int n = 0;
	cin >> n;
	if (n > 10)
	{
		cout << "gongxi" << endl;

	}
	else if(n>5){
		cout << "haikeyi" << endl;
	}
	else {
		cout << "kexi" << endl;
	}*/
	srand((unsigned int)time(NULL));
	int num = rand() % 200 +100;
	int gus = 0;
	cout << "����µ���" << endl;
	while (1) {
		cin >> gus;
		if (gus>num)
		{
			cout << "����" << endl;
		}
		else if (gus < num)
		{
			cout << "С��" << endl;
		}
		else {
			break;
		}


	}
	cout << "�¶��ˣ�������ǣ�" << num << endl;




	 









	return 0;
}
