#include<iostream>
using namespace std;

int inc(){
   static int x=0;//x==0
    x++;//x==1;
    return x;
}
int main(){
  cout<< inc()<<endl;//1
  cout<<inc()<<endl;//2
  cout<<inc()<<endl;//3
}