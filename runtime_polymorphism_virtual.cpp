// with virtual functions 
#include<iostream>
using namespace std;
class hotel{
public:
virtual void manager(){
    cout<<"bhai ma hotel ka manager"<<endl;
}
};
class motel : public hotel {
    public :
    void manager(){
cout<<"bhai ma motel ka manager"<<endl;
    }
};
class VIP : public hotel{
public:
void manager(){
    cout<<"bhai ma 5star ka manager"<<endl;
}
};
int main(){
    hotel *h;
    hotel hh;
    motel mm;
    VIP vp;
    h=&hh;
    h->manager();
    h=&mm;
    h->manager();
    h=&vp;
    h->manager();

    return 0;
}
