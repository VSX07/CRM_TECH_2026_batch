#include<iostream>
using namespace std;
void display(string name,int rollno,int age){
    cout<<"name : "<<name<<endl;
    cout<<"rollno : "<<rollno<<endl;
    cout<<"age : "<<age<<endl;
}
int main(){
    string name;
    cin>>name;
    int rollno;
    cin>>rollno;
    int age;
    cin>>age;
   display(name,rollno,age);
}