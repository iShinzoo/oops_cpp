// constructor defined outside the class 

#include<iostream>
#include<string>
using namespace std;
class car{
    public:
    int year;
    string model;
    string brand;
    car(string x,string y,int z);
    void display(){
    cout<<"car details :"<<brand<<'\n'<<model<<'\n'<<year<<endl;
}
};
car::car(string x,string y,int z){
    brand=x;
    model=y;
    year=z;
};

int main() {
    car op1("BMW","new",1980);
    op1.display();
    car op2("ROllS ROYCE","ok",1890);
    op2.display();
return 0;
}