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
        cout << "a=" << a << "\nb=" << b<<"\n";
    }
    friend void fun(complex );
};
void fun(complex c)
{
    cout<<"sum of a and b is "<<c.a+c.b;
}
int main()
{
    complex c1, c2;
    c1.setdata(3, 4);
    c1.showdata(); 
    fun(c1);
}
