#include <iostream>
#include <conio.h>
using namespace std;
class array
{
private:
    int a[10];

public:
    void insertdata(int index, int value)
    {
        a[index] = value;
    }
    void showdata()
    {
        cout<<a[10];
    }
};
class stack : public array
{
    int top;

public:
    void pushdata(int value)
    {
        insertdata(top, value);
    }
};
int main()
{
    stack s1;
    s1.pushdata(43);
    // s1.showdata();
    // s1.insertdata(3);
}