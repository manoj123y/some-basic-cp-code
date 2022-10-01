#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
struct student
{
    char name;
    int idnumber;
    int mob;
    char adress;
};
student input();
void display(student);
int main()
{
    student b;
    b = input();
    display(b);
}
student input()
{
    student a;
    cout << "enter the name idnumber mob and adress of the student  ";
    cin >> a.name >> a.idnumber >> a.mob  >> a.adress;
    return (a);
}
void display(student c)
{
    cout <<"name of the student is  \n"<<c.name <<"id number of the student is \n"<<c.idnumber <<"mob number of the student is\n"<< c.mob <<"adress of the student is \n" <<c.adress;
}