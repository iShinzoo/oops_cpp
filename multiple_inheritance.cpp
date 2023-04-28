#include<iostream>
#include<string>
using namespace std;
class motel{
  public:
  void charge(){
    cout<<"Rs.500 per day-1bhk / 2bhk - Rs.1000 per day"<<endl;
  }
};
class hotel{
public:
void ask(){
    cout<<"kya ask ha - 2bhk ya 3bhk"<<endl;
}
};
class total : public motel , public hotel{
};

int main(){
    total op;
    op.ask();
    op.charge();
    return 0;
}