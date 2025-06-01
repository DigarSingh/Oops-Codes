#include <iostream>
using namespace std;

class A {
    public:
    void show(int x){
        cout<<"Static Binding: "<<x<<endl;
    }
    void show(double x){
        cout<<"Static Binding: "<<x<<endl;
    }
};

int main(){
    A s;
    s.show(4);
    s.show(4.51);

}