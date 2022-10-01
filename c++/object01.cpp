#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    void setdata(int, int);
    // void setdata(int x, int y)
    // {
    //     a = x;
    //     b = y;
    // }
    void showdata()
    {
        cout << "a=" << a << "\nb=" << b;
    }
};
void complex::setdata(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    complex c;
    c.setdata(3, 5);
    c.showdata();

    return 0;
}