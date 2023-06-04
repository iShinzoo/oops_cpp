// Runtime polymorphism without the virtual keyword

#include <iostream>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout << "Eating...";
    }
    
};
class Dog : public Animal
{
public:
    void eat()
    {
        cout << "Eating bread...";
    }
};
int main(void)
{
    Dog d;
    //    d.eat(); implicit call
    d.Animal::eat(); // eplicit call
                     //    Animal a;
                     //    a.eat();

    return 0;
}