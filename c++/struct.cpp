#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
book input();
struct book
{
    int bookid;
    char title[20];
    float price;
};
int main()
{
    clrscr();
    //  book b1 = {22, "manoj", 34.34};
    // cout<<b1;

    // book b2;
    // b2.bookid=100;
    // strcpy(b2.title,"manoj", 34.32);
    // b2.price=323.43;
    // cout<<b2;

    // book b3;
    // b3=b2;
    book b1;
    b1 = input()
    cout<<b1;
}
book input()
{
    book b;
    cout << "enter bookid,title and price";
    cin >> b.bookid >> b.title >> b.price;
    return b;
}