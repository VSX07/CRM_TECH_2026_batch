#include<iostream>
using namespace std;
class parent{
    public:
    virtual void show(){
        cout<<"parent class function"<<endl;
    }
};
class child: public parent{
    public:
    void show(){
        cout<<"child class function"<<endl;
    }
};
int main(){
    child obj;
    obj.show();
}