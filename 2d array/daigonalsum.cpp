#include<iostream>
using namespace std;
int main(){
    int m;
    int n;
    cin>>m>>n;
    int mat[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum+=mat[i][j];
            }
            if(j==n-i-1 and i!=j){
                sum+=mat[i][j];
            }
        }
    }
    cout<<"daigonal sum : "<<sum;
}