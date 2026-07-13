#include<iostream>
using namespace std;
int main(){
    int mat[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>mat[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum+=mat[i][j];
        }
    }
    cout<<"sum : "<<sum;
}