#include <iostream>
using namespace std;
class hotel
{
public:
    static int bill(int a, int b)
    {
        return a + b;
    }
    static int bill(int a, int b, int c)
    {
        return a + b + c;
    }
};
int main()
{
    hotel h;
    cout << h.bill(100, 300) << endl;
    cout << h.bill(1000, 80, 900);
    return 0;
}
