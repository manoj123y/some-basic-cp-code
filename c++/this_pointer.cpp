#include <iostream>
#include <conio.h>
using namespace std;
class box
{
private:
    int l, b, h;

public:
    void setdata(int l, int b, int h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
    }
    void showdata()
    {
        cout << "l=" << l << "  b=" << b << "  h=" << h;
    }
};
int main()
{
    box smallbox;
    smallbox.setdata(3, 4, 1);
    smallbox.showdata();
    getch();
}