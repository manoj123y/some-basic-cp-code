#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
struct book
{
private:
    int bookid;
    char title[12];
    float price;

public:
    void input()
    {

        cout << "enter the bookid title and price";
        cin >> bookid >> title >> price;
        if (price < 0)
        {
           price=-price;
        }
    }
    void display()
    {
        cout << "\n bookid is  "<<bookid << "\ntitle is  "<<title << "\nprice is "<<price;
    }

};

int
main()
{
    book b;
    b.input();
    b.display();
    // b.price=4120     this is not accesable because it is private member
}