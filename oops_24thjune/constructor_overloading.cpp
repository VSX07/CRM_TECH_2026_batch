#include<iostream>
using namespace std;
class student{
public:
   student(){
    cout<<"defualt_constructor"<<endl;
   }
   student(string name){
    cout<<"Name : "<<name<<endl;
   }
   student(int age){
    cout<<"age : "<<age<<endl;
   }
};

int main(){
   student obj1;//when object is created constructor is called
   student obj2("priya");
    student obj3(21);
}