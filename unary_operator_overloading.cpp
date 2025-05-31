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
    Weight operator++(){ //pre-increment
        Weight temp;
        temp.kg = ++kg;
        return temp;
    }
    Weight operator++(int){  //post-increment
        Weight temp;
        temp.kg = kg++;
        return temp;
    }
};
int main(){
    Weight obj1,obj2;
    obj1.print();
    obj1++;
    obj1.print();
    ++obj1;
    obj1.print();
    obj2 = ++obj1;
    obj2.print();
    return 0;
}