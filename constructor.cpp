//  The constructor has the same name as the class, it is always public, and it does not have any return value.

#include <iostream>
using namespace std;

class opbhai
{
public:
    opbhai()
    {
        cout << "free hu bhot" << endl;
    }
};
int main()
{
    opbhai x;
    return 0;
}