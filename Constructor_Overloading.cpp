#include <iostream>
using namespace std;

class book{
    private:
    string title,author;
    float price;
    
    public:
    
    book(){  //  Default Constructor
        title = "Unknown";
        author = "Unknown";
        price = 0.0;
    }
    // Parameterized Constructor
    book(string t,string a, float p){
        title = t;
        author = a;
        price = p;
    }
    //copy Constructor
    book(const book &b){
        title = b.title;
        author = b.author;
        price = b.price;
    }

    void display(){
        cout<<"\nTitle: "<<title<<"\nAuthor: "<<author<<"\nPrice: "<<price<<endl;
    }
};
int main(){
    book Book1;
    book Book2("C++ Basics","Bjarne",499.9);
    book Book3(Book2);

    cout<<"Book1";Book1.display();
    cout<<"Book2";Book2.display();
    cout<<"Book3";Book3.display();

    return 0;

}