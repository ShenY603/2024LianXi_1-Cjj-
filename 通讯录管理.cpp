#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#define Max 1000
using namespace std;

void Menu()
{
	cout << "1.�����ϵ��" << endl;	
	cout << "2.��ʾ��ϵ��" << endl;
	cout << "3.ɾ����ϵ��" << endl;
	cout << "4.������ϵ��" << endl;
	cout << "5.�޸���ϵ��" << endl;
	cout << "6.�����ϵ��" << endl;
	cout << "0.�˳�" << endl;
}
struct Person
{
	string Name;
	int Sex=0;//1 ��  2 Ů
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
		cout << "ͨѶ¼����" << endl;
	}
	else {
		string name;
		cout << "����������" << endl;
		cin >> name;
		abs->personArray[abs->Size].Name = name;

		cout << "�������Ա�" << endl;
		cout << "1-��" << endl;
		cout << "2-Ů" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->Size].Sex = sex;
				break;
			}
			cout << "����������" << endl;
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
			cout << "�ڴ��´�ʹ��" << endl;
			return 0;

		}
	}

	system("pause");
	return 0;
}