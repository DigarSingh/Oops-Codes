#include <iostream>
using namespace std;

class A{
    public:
    virtual void show(){
        cout << "Base class display" << endl;
    }
};
class B : public A{
    public:
    void show()override{
        cout << "Derived class display" << endl;
    }
};
int main(){
    A* ptr;
    B obj;

    ptr = &obj;

    ptr->show();

}