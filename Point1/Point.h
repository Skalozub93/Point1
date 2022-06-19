#pragma once
#include <iostream>
using namespace std;

class Point
{
private:
	int X;
	int Y;

	static const int width = 30;
	static const int height = 15;

	int arr[height][width];

public:
	Point();
	Point(int X_Constructor, int Y_constructor);
	void SetX(int X_Point);
	void SetY(int Y_Point);

	int GetX();
	int GetY();

	int ToUp(int q);
	int ToDown(int q);
	int ToLeft(int q);
	int ToRight(int q);

	void Print();
};

