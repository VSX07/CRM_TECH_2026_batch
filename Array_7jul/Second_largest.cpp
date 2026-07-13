#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=INT_MIN;
    int Second_largest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            Second_largest=largest;
            largest=arr[i];
        }
        if(Second_largest<arr[i] and largest>arr[i]){
            Second_largest=arr[i];
        }
    }
    cout<<"Second_largest: "<<Second_largest;
}