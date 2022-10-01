#include <iostream>
#include <conio.h>
using namespace std;
class box
{
private:
    int l, b, h;

public:
    void setdata()
    { int x,y,z;
        cout<<"enter the value of the x y and z\n";
        cin>>x>>y>>z;
        l = x;
        b = y;
        h = z;
    }
    void showdata()
    {
        cout << "l=" << l << "  b=" << b << "  h=" << h;
    }
};
int main()
{
    box smallbox, *p;
    p = &smallbox;
    p->setdata(); // smallbox.setdata(3, 4, 5);
    p->showdata();       // smallbox.showdata();
}
