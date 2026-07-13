#include<iostream>
using namespace std;
int func(int num[]){
    for(int i=0;i<5;i++){
        num[i]=num[i]+10;//20,30,40,50,60;
    }
 return num[0];
}
int main(){
    int arr[5]={10,20,30,40,50};
    int x=func(arr);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}