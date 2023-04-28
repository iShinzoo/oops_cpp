// constructor with parameters (inside the class )

#include<iostream>
#include<string>
using namespace std;
class car{
    public:
    string brand;
    string model;
    int year;
    car(string x,string y,int z){
        brand=x;
        model=y;
        year=z;
    }
    void display(){
cout<<"car details :"<<brand<<'\n'<<model<<'\n'<<year<<endl;
   
}
};

int main(){
    car op1("BMW","A7",2016);
    op1.display();
    car op2("AUDI","Q7",2018);
    op2.display();
    
    return 0;
}
