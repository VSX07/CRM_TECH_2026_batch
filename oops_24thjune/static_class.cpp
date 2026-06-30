#include<iostream>
using namespace std;
class A{
  public:
  static int x;
  void inc(){
    x=x+1;
  }
};
//scope resolution operator
// int A::x=0;
int main(){
  A obj;
  obj.inc();
  obj.inc();
  cout<<obj.x<<endl;
}