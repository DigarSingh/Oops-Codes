#include <iostream>
using namespace std;

template <typename T >
    T add( T x, T y){
        return (x+y);
    }
template <typename T >
    T sub( T x, T y){
        return (x-y);
    }
    template <typename T >
    T div( T x, T y){
        return (x/y);
    }
int main(){
    cout<<"Result: "<<add<int>(5,8)<<endl;
    cout<<"Result: "<<sub<int>(8,5)<<endl;
    cout<<"Result: "<<div<float>(11,2)<<endl;
    return 0;
}