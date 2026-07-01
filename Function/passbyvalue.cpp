#include<iostream>
using namespace std;
void inc(int x,int y){
    x=x+1;//x=3
    y=y+1;//y=4
    
}
int main(){
    int x,y;
    cin>>x>>y;//2  3
    inc(x,y);
   cout<<x<<" "<<y;
}