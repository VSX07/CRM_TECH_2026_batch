#include<iostream>
using namespace std;
int Linear_search(int arr[],int key,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return 0;
}

int main(){
    int n;
    cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int key;
cin>>key;
int ans=Linear_search(arr,key,n);
if(ans!=0){
    cout<<"index: "<<ans;
}
else{ 
    cout<<"not found";
}
}