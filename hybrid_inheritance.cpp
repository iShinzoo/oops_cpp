#include<iostream>
using namespace std;
class student{
protected:
int roll_number;
public:
void get_number(int a){
    roll_number=a;
}
void put_number(void){
    cout<<"roll_number"<<roll_number<<endl;
}
};
class test : public student{
    protected:
    float part1,part2;
    public:
    void get_marks(float x,float y){
        part1=x;
        part2=y;
    }
    void put_marks(void){
        cout<<"Marks Obtained"<<'\n'<<"part1"<<part1<<'\n'<<"part2"<<part2<<endl;
    }
};
class sports{
protected:
float score;
public:
void get_score(float x){
    score=x;
}
void put_score(void){
cout<<"score batao ?"<<score<<endl;
}
};
class result : public test,public sports{
float total;
public:
void display(void);
};
void result::display(void){
total=part1+part2+score;
put_number();
put_marks();
put_score();
cout<<"total score :"<<total<<endl;
};
int main(){
    result s1;
    s1.get_score(4);
    s1.get_number(50);
    s1.get_marks(50,60);
    s1.display();
    return 0;
}