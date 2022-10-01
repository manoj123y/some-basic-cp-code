#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
struct complex
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
        cout << "\na=" << a << "\nb=" << b;
    }
};
int main()
{
    complex c;
    c.setdata(2, 3);
    c.showdata();
    return 0;
}