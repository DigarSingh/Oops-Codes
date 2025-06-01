#include <iostream>
using namespace std;

class A{
    public:
    void printMessage(){
    cout<<"Class A Print Message Function\n";
    }
};
class B{
    public:
    void printMessage(){
    cout<<"Class B Print Message Function\n";
    }
};
class AB : public A,public B{
    public:
        void printMessage(){
            A::printMessage();
            B::printMessage();
        }
};
int main(){
    AB obj;
    obj.printMessage();
}