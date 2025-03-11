#include <iostream>
using namespace std;

class book{    // class definition
     public:
     char Name;     // public data member
     int price;
     int noofpages;

     int countBooks(int p){   // public member function
          if(price < p)
               return 1;
          else
               return 0;
     }

     bool isBookPresent(char book){     // public member function
          if(Name == book)
               return true;
          else
               return false;
     }
};

int main(){
     book Maths;    // creating object of class book
     Maths.Name = 'M';   // accessing public data member
     Maths.price = 100;
     Maths.noofpages = 400;
     cout<<Maths.countBooks(99)<<endl;  // accessing public member function
     cout<<Maths.isBookPresent('M');
}