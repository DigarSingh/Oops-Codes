#include <iostream>  
using namespace std;

class Shape{
    public:
        virtual void getArea()=0; // pure virtual function 
};
class Circle : public Shape{
    void getArea()override{
        cout<<"Enter the r: ";
        int r;
        cin>>r;
        cout<<"The Area of Cricle is: "<<(3.14*r*r)<<endl;
    }
};
class Square : public Shape{
    void getArea()override{
        cout<<"Enter the s: ";
        int s;
        cin>>s;
        cout<<"The Area of Square is: "<<(s*s)<<endl;
    }
};
int main(){
    Shape* shape;

    Circle c;
    shape = &c;
    shape->getArea();

    Square s;
    shape = &s;
    shape->getArea();
}