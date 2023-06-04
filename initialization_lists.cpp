#include<iostream>
#include<string>
using namespace std;
class car{
public:
string brand;
string model;
int year;
car():brand("BMW"),model("Q7"),year(1980){
    cout<<"car details :"<<brand<<'\n'<<model<<'\n'<<year<<'\n'<<endl;
};

};
int main() {
    car x;
    
}