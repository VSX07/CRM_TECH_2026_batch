#include<iostream>
using namespace std;

class person{
    public:
    void display(){
        cout<<"person class"<<endl;
    }
};

class student: public person{
  public:
  void study(){
    cout<<"student class"<<endl;
  }
};

class Monitor: public student{
    public:
    void monitor(){
        cout<<"monitor class"<<endl;
    }
};
int main(){
    Monitor m;
    m.display();
    m.study();
    m.monitor();

}