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
    int top=0;
    int down=m-1;
    int left=0;
    int right=n-1;
    int dir=0;
    while(top<=down and left<=right){
        if(dir==0){
            for(int i=left;i<=right;i++){
                cout<<mat[top][i]<<" ";
            }
            top++;
        }
        if(dir==1){
            for(int i=top;i<=down;i++){
                cout<<mat[i][right]<<" ";
            }
            right--;
        }
        if(dir==2){
             for(int i=right;i>=left;i--){
                cout<<mat[down][i]<<" ";
             }
             down--;
        }
        if(dir==3){
            for(int i=down;i>=top;i--){
                cout<<mat[i][left]<<" ";
            }
            left++;
        }
        dir++;
        if(dir==3){
            dir=0;
        }
    }
}