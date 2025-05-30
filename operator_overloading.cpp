#include <iostream>
using namespace std;

class complex{
    private:
        float real,imag;
    public:
        complex(float r,float i){
            real = r;
            imag = i;
        }

    complex operator+(const complex &c){
        return complex(real+c.real,imag+c.imag);
    }
    void print(){
        cout<<real<<"+"<<imag<<"i";
    }
};
int main(){
    complex c1(2,3);
    complex c2(5,8);
    complex c3(c1+c2);
    c3.print();
    return 0;
}