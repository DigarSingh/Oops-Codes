#include <iostream>
using namespace std;

class Car {
private:
    string model;
    string engine_number;

public:
    Car(string m, string e){
    model = m;
    engine_number = e;
    }
    
    friend class Garage;
};

class Garage {
public:
    void showCarDetails(Car c) {
        cout << "Car Model: " << c.model << endl;
        cout << "Engine Number: " << c.engine_number << endl;
    }
};

int main() {
    Car car("Tesla Model 3", "EV123456");
    Garage g;
    g.showCarDetails(car);
    return 0;
}
