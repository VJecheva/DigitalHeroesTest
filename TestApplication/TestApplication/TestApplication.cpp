#include <iostream>
#include "Example.h"
using namespace std;

int main()
{
    int a, b;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "The sum of "<<a<<" and "<<b<<" is "<<sum(a,b)<<endl;
    cout << "The multiplication of " << a << " and " << b << " is " << multiply(a, b) << endl;
    cout << "Divided by two: "<<divideByTwo(a)<<endl;   
    cout<< "The substraction of " << a << " and " << b << " is " << substract(a, b) << endl;

    cout << "I have branch" << endl;

    cout<< "The squareRoot of  sum " << a << " and " << b << " is " << squareRoot(a, b) << endl;
    cout << "The number " << a << " divided by the number " << b << " is: " << divide(a, b) << endl;
}

