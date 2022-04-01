#include "math.h"
#include "Example.h"

int sum(int a, int b)
{
	return a+b;
}

int multiply(int a, int b)
{
	return a*b;
}

int divideByTwo(int a)
{
	return a/2;
}

int substract(int a, int b)
{
	return a - b;
}
float squareRoot(int a)
{
	//int c;
	return sqrt(a);
}
int divide(int a, int b)
{
	if (b!=0) return a / b;
	return a;
}
