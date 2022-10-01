#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    void setdata(int x)
    {
        a = x;
    }
    void showdata()
    {
        cout << "\na=" << a;
    }
    friend complex operator-(complex);
};
complex operator-(complex c)
{
    complex temp;
    temp.a = c.a;
    temp.b = c.b;
    return (temp);
}

int main()
{
    complex c1, c2;
    c1.setdata(3);
    c1.showdata();
    c2 = -c1; // c2=operator-(c1)
    c2.showdata();
}