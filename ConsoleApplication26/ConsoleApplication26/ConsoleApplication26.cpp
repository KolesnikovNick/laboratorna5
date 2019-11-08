// ConsoleApplication26.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "windows.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int y;
	double x(2);
	printf("Enter x:");
	scanf_s("%f", &x);
	do
	{
		y = exp(x) + fabs(x) + pow(x, 2);
		printf("x=%f   y=%d\n", x, y);
		x += 0.1;
	} while (x >= 2 && x <= 3);
	system("pause");
	return 0;
}
