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

}

