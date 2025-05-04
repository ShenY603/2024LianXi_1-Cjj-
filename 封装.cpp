#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include"Circle.h"
using namespace std;

//class Circle { 
//public:
//	void set_point(int x, int y) {
//		point_x=x;
//		point_y=y;
//
//	}
//	void setwide(float r) {
//		wide = r;
//	}
////用一个其他的圆返回当前圆的值
//	Circle receive() {
//		Circle a;
//		a.point_x = point_x;
//		a.point_y = point_y;
//		a.wide = wide;
//
//		return a;
//	}
//	void show() {
//		cout << "圆心的横坐标" <<point_x  << endl;
//		cout << "圆心的纵坐标" << point_y << endl;
//		cout << "圆的半径" << wide << endl;
//
//	}
//private:
//	int point_x;
//	int point_y;
//	float wide;
//
//};


int main3() {
	int x, y;
	float r;
	cin >> x >> y >> r;
	cout << "x的值: " << x << " y的值: " << y << " r的值: " << r <<endl;
	Circle a;
	a.set_point(x, y);
	a.setwide(r);
	cout << "查看圆的属性" << endl;
	a.show();
	Circle model = a.receive();
	cout << "以下是圆的模板检查" << endl;
	model.show();




}