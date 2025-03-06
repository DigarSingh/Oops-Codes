#include <iostream>
using namespace std;

class player{
     public:
     int score;
     int health;

     void showHealth(){
          cout<<"Health is: "<<health<<endl;
     }
     void showScore(){
          cout<<"Score is: "<<score<<endl;
     }
};
int main(){
     player p;
     p.score = 90;
     p.health = 100;
     p.showHealth();
     p.showScore(); 
}