// funtion overloading
#include <stdio.h>
#include <iostream>
using namespace std;
int area(int, int);
float area(int x);
int main()
{
    int r;
    cout << "enter the radius of the circle ";
    cin >> r;
    cout << "\n area of the circle is  " << area(r);
    int a, b;
    cout << "\nenter length and width of the recatangle";
    cin >> a >> b;
    cout << "\narea of the reactangle is  " << area(a, b);
}

int area(int x, int y)
{
    return (x * y);
}
float area(int x)
{
    float a;
    a = 3.14 * x * x;
    return a;
}