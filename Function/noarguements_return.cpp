#include<iostream>
using namespace std;
string even_odd(){
    int x;
    cin>>x;
    if(x%2==0) {
    return "even";
    }
    else{
        return "odd";
    }
}


int main(){
    string ans=even_odd();
// cout<<even_odd();
cout<<ans;
}