#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
struct book
{
    int bookid;
    char title[20];
    float price;
};
void display(book);
book input();
int main()
{
    book b1;
    b1 = input();
    display(b1);
    return 0;
}
book input()
{
    book b;
    cout << " \n enter the bookid title and price  ";
    cin >> b.bookid >> b.title >> b.price;
    return (b);
}
void display(book b)
{
    cout <<"bookid is  "<< b.bookid <<"\n title is  " <<b.title <<"\nprice is  "<<b.price;
}
