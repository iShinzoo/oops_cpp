#include <iostream>
using namespace std;

class opbhai
{
public:
    opbhai()
    {
        cout << "free hu bhot" << endl;
    }
    ~opbhai(){
        cout<<"destructor"<<endl;
    }
};
int main()
{
    opbhai x;
    return 0;
}