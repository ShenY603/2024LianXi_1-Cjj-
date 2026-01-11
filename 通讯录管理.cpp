#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <limits>
#define Max 1000
using namespace std;

void Menu()
{
	cout << "************************" << endl;
	cout << "***** 通讯录管理系统 *****" << endl;
	cout << "************************" << endl;
	cout << "1.添加联系人" << endl;	
	cout << "2.显示联系人" << endl;
	cout << "3.删除联系人" << endl;
	cout << "4.查找联系人" << endl;
	cout << "5.修改联系人" << endl;
	cout << "6.清空联系人" << endl;
	cout << "0.退出" << endl;
	cout << "请选择(0-6): ";
}

struct Person
{
	string Name;
	int Sex=0;//1 男  2 女
	int age=0;
	string num;
	string address;
};

struct Addressbooks
{
	Person personArray[Max];
	int Size=0;
};

// 添加联系人
void addPerson(Addressbooks* abs)
{
	if (abs->Size == Max)
	{
		cout << "通讯录已满，无法添加！" << endl;
		system("pause");
		system("cls");
		return;
	}
	
	cout << "----- 添加联系人 -----" << endl;
	
	string name;
	cout << "请输入姓名: ";
	cin >> name;
	abs->personArray[abs->Size].Name = name;

	cout << "请输入性别(1-男 2-女): ";
	int sex = 0;
	while (true)
	{
		cin >> sex;
		if (sex == 1 || sex == 2)
		{
			abs->personArray[abs->Size].Sex = sex;
			break;
		}
		cout << "输入错误，请重新输入(1-男 2-女): ";
	}

	cout << "请输入年龄: ";
	while (true)
	{
		int age;
		cin >> age;
		if (age > 0 && age < 150)
		{
			abs->personArray[abs->Size].age = age;
			break;
		}
		cout << "年龄输入错误，请重新输入(1-150): ";
	}

	cout << "请输入电话号码: ";
	string num;
	cin >> num;
	abs->personArray[abs->Size].num = num;

	cout << "请输入地址: ";
	string address;
	cin.ignore(); // 清除缓冲区
	getline(cin, address);
	abs->personArray[abs->Size].address = address;

	abs->Size++;
	cout << "添加成功！" << endl;
	
	system("pause");
	system("cls");
}

// 显示联系人
void showPerson(Addressbooks* abs)
{
	if (abs->Size == 0)
	{
		cout << "通讯录为空！" << endl;
	}
	else
	{
		cout << "----- 联系人列表 -----" << endl;
		for (int i = 0; i < abs->Size; i++)
		{
			cout << "编号: " << i + 1 << endl;
			cout << "姓名: " << abs->personArray[i].Name << endl;
			cout << "性别: " << (abs->personArray[i].Sex == 1 ? "男" : "女") << endl;
			cout << "年龄: " << abs->personArray[i].age << endl;
			cout << "电话: " << abs->personArray[i].num << endl;
			cout << "地址: " << abs->personArray[i].address << endl;
			cout << "-------------------" << endl;
		}
		cout << "共 " << abs->Size << " 个联系人" << endl;
	}
	system("pause");
	system("cls");
}

// 查找联系人（返回索引，找不到返回-1）
int findPerson(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->Size; i++)
	{
		if (abs->personArray[i].Name == name)
		{
			return i;
		}
	}
	return -1;
}

// 删除联系人
void deletePerson(Addressbooks* abs)
{
	if (abs->Size == 0)
	{
		cout << "通讯录为空，无法删除！" << endl;
		system("pause");
		system("cls");
		return;
	}
	
	cout << "----- 删除联系人 -----" << endl;
	string name;
	cout << "请输入要删除的联系人姓名: ";
	cin >> name;
	
	int index = findPerson(abs, name);
	if (index != -1)
	{
		// 显示要删除的联系人信息
		cout << "找到联系人:" << endl;
		cout << "姓名: " << abs->personArray[index].Name << endl;
		cout << "电话: " << abs->personArray[index].num << endl;
		
		cout << "确认删除吗？(1-是 0-否): ";
		int confirm;
		cin >> confirm;
		
		if (confirm == 1)
		{
			// 将后面的联系人前移
			for (int i = index; i < abs->Size - 1; i++)
			{
				abs->personArray[i] = abs->personArray[i + 1];
			}
			abs->Size--;
			cout << "删除成功！" << endl;
		}
		else
		{
			cout << "取消删除" << endl;
		}
	}
	else
	{
		cout << "未找到姓名为 " << name << " 的联系人" << endl;
	}
	
	system("pause");
	system("cls");
}

// 查找联系人并显示
void searchPerson(Addressbooks* abs)
{
	if (abs->Size == 0)
	{
		cout << "通讯录为空！" << endl;
		system("pause");
		system("cls");
		return;
	}
	
	cout << "----- 查找联系人 -----" << endl;
	string name;
	cout << "请输入要查找的联系人姓名: ";
	cin >> name;
	
	int index = findPerson(abs, name);
	if (index != -1)
	{
		cout << "查找结果:" << endl;
		cout << "姓名: " << abs->personArray[index].Name << endl;
		cout << "性别: " << (abs->personArray[index].Sex == 1 ? "男" : "女") << endl;
		cout << "年龄: " << abs->personArray[index].age << endl;
		cout << "电话: " << abs->personArray[index].num << endl;
		cout << "地址: " << abs->personArray[index].address << endl;
	}
	else
	{
		cout << "未找到姓名为 " << name << " 的联系人" << endl;
	}
	
	system("pause");
	system("cls");
}

// 修改联系人
void modifyPerson(Addressbooks* abs)
{
	if (abs->Size == 0)
	{
		cout << "通讯录为空，无法修改！" << endl;
		system("pause");
		system("cls");
		return;
	}
	
	cout << "----- 修改联系人 -----" << endl;
	string name;
	cout << "请输入要修改的联系人姓名: ";
	cin >> name;
	
	int index = findPerson(abs, name);
	if (index != -1)
	{
		cout << "当前信息:" << endl;
		cout << "1. 姓名: " << abs->personArray[index].Name << endl;
		cout << "2. 性别: " << (abs->personArray[index].Sex == 1 ? "男" : "女") << endl;
		cout << "3. 年龄: " << abs->personArray[index].age << endl;
		cout << "4. 电话: " << abs->personArray[index].num << endl;
		cout << "5. 地址: " << abs->personArray[index].address << endl;
		
		cout << "请选择要修改的项目(1-5，0取消): ";
		int choice;
		cin >> choice;
		
		switch (choice)
		{
		case 1:
			cout << "请输入新姓名: ";
			cin >> abs->personArray[index].Name;
			break;
		case 2:
			cout << "请输入新性别(1-男 2-女): ";
			cin >> abs->personArray[index].Sex;
			break;
		case 3:
			cout << "请输入新年龄: ";
			cin >> abs->personArray[index].age;
			break;
		case 4:
			cout << "请输入新电话: ";
			cin >> abs->personArray[index].num;
			break;
		case 5:
			cout << "请输入新地址: ";
			cin.ignore();
			getline(cin, abs->personArray[index].address);
			break;
		case 0:
			cout << "取消修改" << endl;
			break;
		default:
			cout << "无效选择" << endl;
		}
		
		if (choice >= 1 && choice <= 5)
		{
			cout << "修改成功！" << endl;
		}
	}
	else
	{
		cout << "未找到姓名为 " << name << " 的联系人" << endl;
	}
	
	system("pause");
	system("cls");
}

// 清空联系人
void clearPerson(Addressbooks* abs)
{
	cout << "确认清空所有联系人吗？(1-是 0-否): ";
	int confirm;
	cin >> confirm;
	
	if (confirm == 1)
	{
		abs->Size = 0;
		cout << "通讯录已清空！" << endl;
	}
	else
	{
		cout << "取消清空" << endl;
	}
	
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
			showPerson(&abs);
			break;
		case 3:
			deletePerson(&abs);
			break;
		case 4:
			searchPerson(&abs);
			break;
		case 5:
			modifyPerson(&abs);
			break;
		case 6:
			clearPerson(&abs);
			break;
		case 0:
			cout << "期待下次使用，再见！" << endl;
			system("pause");
			return 0;
		default:
			cout << "输入错误，请重新输入！" << endl;
			system("pause");
			system("cls");
		}
	}
	
	return 0;
}
