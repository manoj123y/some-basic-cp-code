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
    complex add(complex c)
    {
        complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return (temp);
    }
    void showdata()
    {
        cout << "a=" << a << "\nb=" << b;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setdata(2, 3);
    c2.setdata(4, 6);
    c3 = c1.add(c2);
    c3.showdata();
    return 0;
}