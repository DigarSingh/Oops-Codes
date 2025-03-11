#include <iostream>
using namespace std;

class player{  // class definition
     private:  // private access specifier
     int score; // private data member
     int health;

     public: // public access specifier

     void setScore(int s){    // public member function
          score = s;     // accessing private data member
     }
     void setHealth(int h){
          health = h;   
     }
     void showHealth(){  
          cout<<"Health is: "<<health<<endl; 
     }
     void showScore(){   
          cout<<"Score is: "<<score<<endl; 
     }
};
int main(){
     player p; // creating object of class player
     p.setHealth(100);   // accessing public member function
     p.showHealth();
     p.setScore(10);    
     p.showScore(); 
}