// example of virtual function where derived base is being called using the base class 

#include <iostream>
using namespace std;
class hotel
{
public:
    virtual void display()
    {
        cout << "bill bharde bhai";
    }
};
class motel : public hotel
{
public:
    void display()
    {
        cout << "hamara bill bhi bharde bhai";
    }
};
int main()
{
    hotel *h;
    motel m;
    h = &m;
    h->display();
    return 0;
}
