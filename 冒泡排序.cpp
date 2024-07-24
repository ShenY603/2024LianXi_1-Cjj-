#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <ctime>
using namespace std;


int main()
{
	int num[100] = { 0 };
	int i, j;
	int temp;
	for (i = 0;i < 9;i++)
	{
		cin >> num[i] ;
	}
	for (i = 0;i < 9;i++)
	{
		cout << " " << num[i];
	}
	cout << endl;
	for (i = 0;i < 9;i++)
	{
		for (j = 0;j < 9 - i - 1;j++)
		{
			if (num[j] > num[j + 1])
			{
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}
	for (i = 0;i < 9;i++)
	{
		cout <<" " << num[i];
	}

	return 0;
}
