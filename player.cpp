#include <iostream>
using namespace std;

class player{
     private:
     int score;
     int health;

     public:

     void setScore(int s){
          score = s;
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
     player p;
     p.setHealth(100);
     p.showHealth();
     p.setScore(10); 
     p.showScore(); 
}