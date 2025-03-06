#include <iostream>
using namespace std;

class book{
     public:
     char Name;
     int price;
     int noofpages;

     int countBooks(int p){
          if(price < p)
               return 1;
          else
               return 0;
     }

     bool isBookPresent(char book){
          if(Name == book)
               return true;
          else
               return false;
     }
};

int main(){
     book Maths;
     Maths.Name = 'M';
     Maths.price = 100;
     Maths.noofpages = 400;
     cout<<Maths.countBooks(99)<<endl;
     cout<<Maths.isBookPresent('M');
}