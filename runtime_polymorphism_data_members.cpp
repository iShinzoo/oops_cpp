#include <iostream>
using namespace std;
class hotel
{
public:
    string color = "Agr paise nhi ha toh kyon aaya idhr";
};
class motel : public hotel
{
public:
    string color = "chl ab bartan dhode";
};
int main()
{
    hotel h = motel();
    // h.motel(); will throw error
    cout << h.color;
    return 0;
}