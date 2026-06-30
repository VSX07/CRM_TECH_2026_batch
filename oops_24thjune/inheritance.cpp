#include<iostream>
using namespace std;

class parent{
    public:
    string name;
    int age;
    parent(){
        cout<<"constructor of class A"<<endl;
    }
};
class child : public parent{
     public: 
     int rollno;
     string course;
     child(){
        cout<<"constructor of class B"<<endl;
     }
     void setdetails(){
        name="priya";
        age=21;
        rollno=1234;
        course="Btech";
     }
     void display(){
        cout<<"name :"<<name<<endl;
        cout<<"age :"<<age<<endl;
        cout<<"rollno :"<<rollno<<endl;
        cout<<"course :"<<course<<endl;

     }
};

int main(){
    child c;
    c.setdetails();
    c.display();
}