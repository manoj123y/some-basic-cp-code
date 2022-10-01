#include <iostream>
using namespace std;
template <class X,class Y>

X big(X x, Y y)
{
    if (x > y)
        return (x);

    else
        return (y);
    // cout << x <<"   "<< y;
}
int main()
{
    cout << big(4.9, 9.8);
}
