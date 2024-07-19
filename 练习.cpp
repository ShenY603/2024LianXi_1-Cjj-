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
	cout << "a=" << lx_1<< "个" << endl;
	cout << "b=" << b << endl;
	cout << "b占用的空间是：" << sizeof(b) << endl;
	
	float f1 = 3.1415926f;
	char e = 48;
	
	cout << "\\" << endl;
	char a = 'A';
	string str = "0";
	cout << "str的值为" << str << endl; 
	cin >> str;
	cout << "str的值为" << str << endl;

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
	cout << "输入猜的数" << endl;
	while (1) {
		cin >> gus;
		if (gus>num)
		{
			cout << "大了" << endl;
		}
		else if (gus < num)
		{
			cout << "小了" << endl;
		}
		else {
			break;
		}


	}
	cout << "猜对了，随机数是：" << num << endl;




	 









	return 0;
}
