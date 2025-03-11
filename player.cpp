#include <iostream>
using namespace std;

class player{  // class definition
     private:  // private access specifier
     int score; // private data member
     int health; // private data member

     public: // public access specifier

     void setScore(int s){    // public member function
          score = s;     // accessing private data member
     }
     void setHealth(int h){   // public member function
          health = h;    // accessing private data member
     }
     void showHealth(){  // public member function
          cout<<"Health is: "<<health<<endl; // accessing private data member
     }
     void showScore(){   // public member function
          cout<<"Score is: "<<score<<endl; // accessing private data member
     }
};
int main(){
     player p; // creating object of class player
     p.setHealth(100);   // accessing public member function
     p.showHealth();
     p.setScore(10);    
     p.showScore(); 
}