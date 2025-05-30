#include <iostream>
using namespace std;

class Point {
 int x, y;
public:
 // Constructor: takes two ints, initializes x and y
 Point(int _x, int _y) : x(_x), y(_y) {
 cout << "Point constructed at (" << x << ", " << y << ")\n";
 }
 void print() const {
 cout << "Point: " << x << "," << y << "\n";
 }
};

int main() {

    Point p(3, 4); // Constructor is called here
    p.print();
    return 0;
}