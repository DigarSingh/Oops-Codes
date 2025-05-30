#include <iostream>
using namespace std;

class Animal{
    public:
    virtual void sound(){
        cout<<"Animal makes sound"<<endl;
    }
};

class Dog: public Animal{
    public:
        void sound()override{
            cout<<"Dog Barks"<<endl;
        }
};

class Cat: public Animal{
    public:
        void sound()override{
            cout<<"Cat Meows"<<endl;
        }
};
int main(){
    Animal*animal;
    Dog d;
    Cat c;

    animal = &d;
    animal-> sound();
    
    animal = &c;
    animal-> sound();

    return 0;
}