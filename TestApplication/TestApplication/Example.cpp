#include "math.h"
#include "Example.h"

int sum(int a, int b)
{
	return a+b;
}
int sumMore(int a, int b,int c)
{
	return a + b + c;
}

int multiply(int a, int b)
{
	return a * b;
}

int divideByTwo(int a)
{
	return a / 2;
}

int substract(int a, int b)
{
	return a - b;
}

float squareRoot(int a)
{
	return sqrt(a);
}

float divide(int a, int b)
{
	if (b != 0) return a / static_cast<float> (b);
}

int modulus(int a, int b)
{
	return a % b;
}