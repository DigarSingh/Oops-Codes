#include <iostream>
using namespace std;

class Box{
    private:
    float length, width, height;
    public:
    Box(float l,float w,float h){
        length = l;
        width = w;
        height = h;
    }

    friend void CalculateBox(Box);
};

void CalculateBox(Box b){
    float volume = b.length*b.width*b.height;
    cout << "Volume of the box: " << volume << endl;
}
int main(){
    Box obj1(5,7,8);
    CalculateBox(obj1);
    return 0;
}