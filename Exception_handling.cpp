#include <iostream>
using namespace std;

int main(){
    int n,d,result = 0;

    cout<<"Enter the Numerator and Denominator: "<<endl;
    cin>>n>>d;

    try{
        if(d==0){
            throw d;
        }
        result = n/d ;
    }
    catch(int ex){
        cout<<"Exception: Division by Zero not allowed "<<ex<<endl;
    }
    cout<<"Result: "<<result<<endl;
    return 0;
}
