#include <iostream>
using namespace std;

class Weight {
    private:
        int kg;
    public:
        Weight(){
        kg = 0;
        }
        Weight(int x){
            kg = x;
        }
    void print(){
        cout<<"Weigth in KG: "<<kg<<endl;
    }
    void operator++(){ //pre
        ++kg;
    }
    void operator++(int){  //post
        kg++;
    }
};
int main(){
    Weight obj;
    obj.print();
    obj++;
    obj.print();
    ++obj;
    obj.print();
    return 0;
}