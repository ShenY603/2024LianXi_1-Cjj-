#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#define Max 1000
using namespace std;

void Menu()
{
	cout << "1.添加联系人" << endl;	
	cout << "2.显示联系人" << endl;
	cout << "3.删除联系人" << endl;
	cout << "4.查找联系人" << endl;
	cout << "5.修改联系人" << endl;
	cout << "6.清空联系人" << endl;
	cout << "0.退出" << endl;
}
struct Person
{
	string Name;
	int Sex=0;//1 男  2 女
	int age=0;
	string num;
};
struct Addressbooks
{
	Person personArray[Max];
	int Size=0;
};
void addPerson(Addressbooks* abs)
{
	if (abs->Size == Max)
	{
		cout << "通讯录已满" << endl;
	}
	else {
		string name;
		cout << "请输入姓名" << endl;
		cin >> name;
		abs->personArray[abs->Size].Name = name;

		cout << "请输入性别" << endl;
		cout << "1-男" << endl;
		cout << "2-女" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->Size].Sex = sex;
				break;
			}
			cout << "请重新输入" << endl;
		}
	}
	abs->Size++;
	system("pause");
	system("cls");


}
int main()
{
	Addressbooks abs;
	int select = 0;
	while (true)
	{
		Menu();
		cin >> select;
		switch (select)
		{
		case 1:
			addPerson(&abs);
			break;
		case 2:

			break;
		case 3:

			break;
		case 4:

			break;
		case 5:

			break;
		case 6:

			break;
		case 0:
			cout << "期待下次使用" << endl;
			return 0;

		}
	}

	system("pause");
	return 0;
}