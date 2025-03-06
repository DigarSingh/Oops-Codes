#include <iostream>
#include <cstring>
using namespace std;

class Student{
     public:
     char name[10];
     int rollno;
     int age;
     long long int mobno;
     char address[50]; 
};
int main(){
     Student a;
     strcpy(a.name,"aman");
     a.rollno = 1;
     a.age = 18;
     a.mobno = 8912346;
     strcpy(a.address,"Dehradun");
     
     cout<<"Name "<<a.name<<endl;
     cout<<"Roll_no "<<a.rollno<<endl;
     cout<<"Age "<<a.age<<endl;
     cout<<"Mob_no "<<a.mobno<<endl;
     cout<<"Address "<<a.address<<endl;
}