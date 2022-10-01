#include <iostream>
using namespace std;
class Bbb;
class Aaa
{
private:
    int a;

public:
    void setdata(int x)
    {
        a = x;
    }
    void showdata()
    {
        cout << "a=" << a;
    }
    friend void fun(Aaa,Bbb);
};
class Bbb
{
private:
    int b;

public:
    void setdata(int y)
    {
        b = y;
    }
    void showdata()
    {
        cout << "\nb=" << b<<"\n";
    }
    friend void fun(Aaa,Bbb);
};
void fun(Aaa c3, Bbb c4)
{
    cout <<"sum of a and b is "<< c3.a + c4.b;
}
int main()
{
    Aaa c1;
    c1.setdata(3);
    Bbb c2;
    c2.setdata(4);
    c1.showdata();
    c2.showdata();
    fun(c1, c2);
}