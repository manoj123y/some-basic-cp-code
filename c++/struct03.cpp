#include <stdio.h>
#include <stdio.h>
#include <iostream>
using namespace std;
struct book
{
    int bookid;
    char title[20];
    int price;
    void input()
    {
        cout << "enter the bookid title and price";
        cin >> bookid >> title >> price;
    }
    void display()
    {
        cout << bookid << title << price;
    }
};
int main()
{
    book b;
    b.input();
    b.display();
}