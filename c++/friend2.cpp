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
    friend complex operator+(complex, complex);
};
complex operator+(complex X, complex Y)
{
    complex temp;
    temp.a = X.a + Y.a;
    temp.b = X.b + Y.b;
    return (temp);
}
int main()
{
    complex x, y, z;
    x.setdata(3, 5);
    y.setdata(6, 8);
    x.showdata();
    y.showdata();
    z = operator+(x, y); // z = x + y;
    cout<<"\nsum of the complex number is ";
    z.showdata();
}