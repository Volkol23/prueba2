// ejemplo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <conio.h>
#include "stdio.h"

int RFunction(int &a, int b, int c)
{
	if (b>0)
	{
		b = RFunction(a, b - 1, c);
	}
	else
	{
		a += c;
	}

	return b;
}

void main()
{
	int x = 1; int y = 3; int z = 5;

	z = RFunction(x, y, z);

	printf("%d %d %d\n", x, y, z);
	_getwch();

}

