#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
class complex
{
public:
    // private:
    int a, b;

public:
    ~complex() // destructor
    {
        cout << "destructor";
    }
};
void fun()
{
    complex obj;

    obj.a = 9;
    obj.b = 5;
    cout << "a=" << obj.a << "\nb=" << obj.b;

    cout << "for checking the destructor\n";
}
int main()
{
    fun();
    getch();
}