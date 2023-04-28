#include<iostream>
#include<string>
using namespace std;
class motel{
  public:
  void charge(){
    cout<<"Rs.500 per day-1bhk / 2bhk - Rs.1000 per day"<<endl;
  }
};
class hotel : public motel{
public:
void ask(){
    cout<<"kya ask ha - 2bhk ya 3bhk"<<endl;
}
};
class VIP : public hotel{
    public:
    void Expansive(){
        cout<<"vip rooms Rs.10000 per day "<<endl;
    }
};
int main(){
    VIP op;
    op.ask();
    op.charge();
    op.Expansive();
    return 0;
}