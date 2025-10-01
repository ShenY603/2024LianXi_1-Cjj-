#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Poem {
public:
	Poem() {
		
		cout<<"默认构造函数的调用" << endl;
	}
	Poem(int a) {

		cout << "有参构造函数的调用" << endl;
	}
	Poem(const Poem* p) {
		cout << "拷贝构造函数的调用" << endl;
	}
	~Poem() {
		int a = 10;
		cout << " a的值: " << a<<endl;

		cout << "析构函数的调用" << endl;


	}

	int a;



};
void test() {

	Poem s;
}
int main4() {
	Poem p;

	system("pause");

	test();
	return 0;
}