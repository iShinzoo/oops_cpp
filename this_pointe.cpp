// this pointer but throws a error 
#include<iostream>
#include<cstring>
using namespace std;
class person{
    char name[20];
    int age;
public:
person(char *s,int a){
    strcpy(name , s);
    age=a;
}
person & person :: greater(person & x){
    if (x.age>=age){
        return x;
    } else {
        return *this;
    }
}
void display(void){
 cout<<"Name"<<name<<endl;
 cout<<"Age"<<age<<endl;
}
};
int main(){
    person p1("KELIX", 18);
    person p2("OP", 28);
    person p3("SIK", 20);

person p=p1.greater(p3);
cout << "elder person :";
p.display();
    return 0;
}