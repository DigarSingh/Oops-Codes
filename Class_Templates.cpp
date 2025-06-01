#include <iostream>
using namespace std;

template <typename T>
class A{
    T a;
    public:
    void SetData(T x){
        a = x; 
    }
    T GetData(){
        return a;
    }
};
int main(){
    A <int>obj1;
    obj1.SetData(5);
    cout<<"Value is : "<<obj1.GetData();

    A <float>obj2;
    obj2.SetData(5.34);
    cout<<"\nValue is : "<<obj2.GetData();
    return 0;
}