#define _CRT_SECURE_NO_WARNINGS
#include"Circle.h"

using namespace std;
void Circle::set_point(int x, int y) {
	point_x = x;
	point_y = y;

}
void Circle::setwide(float r) {
	wide = r;
}
//用一个其他的圆返回当前圆的值
Circle Circle::receive() {
	Circle a;
	a.point_x = point_x;
	a.point_y = point_y;
	a.wide = wide;

	return a;
}
void Circle::show() {
	cout << "圆心的横坐标" << point_x << endl;
	cout << "圆心的纵坐标" << point_y << endl;
	cout << "圆的半径" << wide << endl;

}

