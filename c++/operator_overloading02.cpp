#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
class integer
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
        cout << "\na=" << a;
    }
    integer operator++()
    {
        integer i;
        i.a = ++a;
        return (i);
    }
    integer operator++(int)
    {
        integer i;
        i.a=a++;
        return(i);
    }
};
int main()
{
    integer c1, c2,c3;
    c1.setdata(6);
    
    c3=c1++;
    c3.showdata();
    c2 = ++c1;
    c2.showdata();
}