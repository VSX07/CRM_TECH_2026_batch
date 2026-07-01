#include<iostream>
using namespace std;
int sum(int x,int y){
    int z=x+y;
    return z;
}


int main(){
   int x,y;
   cin>>x>>y;
//    int ans=sum(x,y);
//    cout<<ans<<endl;
cout<<sum(x,y);
}