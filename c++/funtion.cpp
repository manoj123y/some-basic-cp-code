#include <stdio.h>
#include <iostream>
using namespace std;
int add(int, int, int);
int main()
{
    int a, b, c;
    cout << "enter three number a b and c  ";
    cin >> a >> b >> c;
    cout << "sum of  " << a <<","<< b << "  and  " << c << "  is  " << add(a, b, c);
}
int add(int x, int y, int z)
{
    return (x + y + z);
}