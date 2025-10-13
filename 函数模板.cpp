#include <iostream>
using namespace std;

//通用数组排序
//降序

template<class T>
void Swap(T &a,T &b)
{
	T temp=a;
	a = b;
	b = temp;
}
template<class T>
void Print(T arr[],int len)
{
	for (int i = 0;i < len;i++)
	{
		cout << arr[i] << " ";
	}
}

template<class T>
void Sort(T arr[], int len)
{
	for (int i = 0;i < len;i++)
	{
		int max = i;//认定最大值的下标
		for (int j = i + 1;j < len;j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;

			}
		}
		if (max != i)
		{
			Swap(arr[max], arr[i]);
		}
	}

}
void test1()
{
	char arr[] = "aabbedurjg";
	int len = sizeof(arr)/sizeof(char);
	Sort(arr, len);
	Print(arr, len);
}
int main()
{
	test1();



	system("pause");
	return 0;
}