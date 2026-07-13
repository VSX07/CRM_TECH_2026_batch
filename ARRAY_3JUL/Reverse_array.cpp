#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int arr2[5];
    int j=0;
    for(int i=4;i>=0;i--){
      arr2[j]=arr[i];
      j++;
    }
    for(int i=0;i<5;i++){
        cout<<arr2[i]<<" ";
    }
}