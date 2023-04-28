#include <iostream>
using namespace std;
class item
{
    int number;
    float cost;

public:
    void getdata(int a, float b);
    void putdata(void)
    {
        cout << "number :" << number << "\n";
        cout << "cost : " << cost << "\n";
    }
};
void item ::getdata(int a, float b)
{
    number = a;
    cost = b;
}
int main()
{
    item x;
    cout << "\noobject x"
         << "\n";
    x.getdata(50, 75.5);
    x.putdata();
    item y;
    cout << "\noobject y"
         << "\n";
    y.getdata(80, 90.6);
    y.putdata();
    return 0;
}