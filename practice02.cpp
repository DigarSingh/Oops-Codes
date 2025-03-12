#include <iostream>
using namespace std;

class cricketer{
     public:
     string name;
     int age;
     int noofTestMacthes;
     int averageScore; 
};
int main(){

     cricketer team[11] = {
          {"Virat Kohli", 35, 100, 98},
          {"Rohit Sharma", 39, 110, 80},
          {"MS Dhoni", 42, 90, 50},
          {"Sachin Tendulkar", 50, 200, 99},
          {"Rahul Dravid", 51, 160, 95},
          {"Sourav Ganguly", 52, 120, 85},
          {"Yuvraj Singh", 41, 140, 78},
          {"Kapil Dev", 65, 130, 70},
          {"Anil Kumble", 53, 132, 45},
          {"Harbhajan Singh", 44, 103, 60},
          {"Jasprit Bumrah", 30, 60, 25}
      };
     for(int i=0;i<11;i++){
          cout<<"Name: "<<team[i].name<<endl;
          cout<<"Age: "<<team[i].age<<endl;
          cout<<"No of Test Macthes: "<<team[i].noofTestMacthes<<endl;
          cout<<"Average Score: "<<team[i].averageScore<<endl;
          cout<<endl;
     }
     
}