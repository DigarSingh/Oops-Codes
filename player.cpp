#include <iostream>
using namespace std;

class player{  // class definition

     private:  // private access specifier
     
     int score; // private data member
     int health;
     int age;
     bool alive;

     public: // public access specifier
     
    
     int getScore(){     // getter for returning values
          return score;
     }
     int getHealth(){
          return health;
     }
     int getAge(){
          return age;
     }
     int IsAlive(){
          return alive;
     }
     // public members function
     void setHealth(int health){    // setter for inserting values 
         this->health = health;     // this matlab iss wali class ka health
     }
     void setScore(int score){
         this->score = score;       // accessing private data members
     }
     void setAge(int age){
          this->age = age;
     }
     void setIsAlive(bool alive){
          this->alive = alive;
     } 
};
int main(){
     player p; // creating object of class player

     p.setHealth(100);   // accessing public member function
     p.setScore(10);
     p.setAge(18);
     p.setIsAlive(1);   
     cout<<p.getScore()<<endl;
     cout<<p.getHealth()<<endl;
     cout<<p.getAge()<<endl;
     cout<<p.IsAlive()<<endl;

}                                                                                                                         