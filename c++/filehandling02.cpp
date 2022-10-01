#include <iostream>
#include <fstream>
#include <conio.h>
int main()
{
    ifstream fin;
    char ch;
    fin.open("myfile.dat");
    fin >> ch;
    while (!fin.cof())
    {
        cout << ch;
        cin >> ch;
    }
    fin.close();
    getch();
}