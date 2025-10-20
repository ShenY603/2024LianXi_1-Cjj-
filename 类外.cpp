#include <iostream>
//#include <string>
using namespace std;


template<class T1,class T2>
class Person
{

public:
	Person(T1 name, T2 age);
	
	void ShowInfo();

		T1 name;
		T2 age;

};

//构造函数类外实现
template<class T1,class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	{
		this->name = name;
		this->age = age;
	}
}
template<class T1,class T2>
void Person<T1,T2>:: ShowInfo()
{
	cout << "姓名：" << name << endl << "年龄：" << age << endl;

}

void test1()
{
	Person<string,int>p("Mr.Smith",25);
	p.ShowInfo();
}


int main()
{
	test1();


	system("pause");
	//system("");
	return 0;
}