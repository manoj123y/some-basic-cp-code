#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void showdata()
    {
        cout << "\na=" << a << "  b=" << b;
    }
    complex operator-()
    {
        complex temp;
        temp.a = -a;
        temp.b = -b;
        return (temp);
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setdata(3, 6);
    // c1.showdata();
    c2 = c1.operator-();
    c2.showdata();
}
