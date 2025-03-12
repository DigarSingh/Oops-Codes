#include <iostream>
using namespace std;

class Outer{  // Outer class
private:
    int outerData;

public:
     class Inner {   // Inner nested class
     private:
     int innerData;

     public:
     Inner(int data) : innerData(data) {}

     void displayInnerData() {
     cout << "Inner data: " << innerData << endl;
     }
};

    // Constructor for Outer class
     Outer(int data) : outerData(data) {}

     void displayOuterData() {
     cout << "Outer data: " << outerData << endl;
     }
};

int main() {
     // Creating an instance of Outer class
     Outer outerObj(10);

     // Creating an instance of Inner class (nested within Outer)
     Outer::Inner innerObj(20);

     // Accessing methods of both Outer and Inner classes
     outerObj.displayOuterData();
     innerObj.displayInnerData();

     return 0;
}
