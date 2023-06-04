// pure virtual function also known as do nothing function
// defiened as :- virtual void display()=0;
// if base class contian the pure virtual function then it is known as abstract base class

#include <iostream>
using namespace std;
class hotel
{
public:
    virtual void display() = 0;
};
class motel : public hotel
{
public:
    void display()
    {
        cout << "Namaste !";
    }
};
int main()
{
    hotel *h;
    motel m;
    h = &m;
    h->display();
}