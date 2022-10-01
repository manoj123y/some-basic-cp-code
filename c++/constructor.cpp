#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std; 
class complex 
{
    private:
    int a,b; 
    public:
    complex(int x,int y) //parameterized constructor
    {
        a=x; 
        b=y; 
    }
    complex(int k) //parameterized constructor
    {
        a=k;

    }
    complex()//default constructor
    {}
    complex(complex &c)//copy constructor
    {
        a=c.a;
        b=c.b;
    }
};

int main()
{
    complex c1(3,4),c2(3),c;
    complex c4(c1);
}