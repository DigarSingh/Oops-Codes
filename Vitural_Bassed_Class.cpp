#include<iostream>
using namespace std;

class Vehicle{
    protected:
    string Brand;
    int Year;

    public:
    Vehicle(){
        Brand = "Generic";
        Year = 2000; 
    }
    void display(){
        cout<<"Brand: "<<Brand<<"\nYear: "<<Year<<endl;
    }
};

class Car : virtual public Vehicle{

};
class Bike : virtual public Vehicle{
    
};

class ElectricVehicle : public Car, public Bike{
    public:
    void showDetails(){
        display();
    }
};
int main(){
    ElectricVehicle ev;
    ev.showDetails();
    return 0;
}
    