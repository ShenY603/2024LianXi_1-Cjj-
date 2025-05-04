#pragma once
#include<iostream>
using namespace std;

class Circle {
public:
	void set_point(int x, int y);
		void setwide(float r);
		//用一个其他的圆返回当前圆的值
		Circle receive();
		void show();
private:
	int point_x;
	int point_y;
	float wide;

};