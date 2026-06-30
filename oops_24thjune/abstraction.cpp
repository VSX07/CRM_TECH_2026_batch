#include<iostream>
using namespace std;
class vehicle{
    public:
    virtual void start()=0;
};
class car:public vehicle{
    public:
    void start(){
        cout<<"car starts with key "<<endl;
    }
};
class bike: public vehicle{
    public:
    void start(){
        cout<<"bike start with self start "<<endl;
    }
};
int main(){
  car c;
  bike b;
  c.start();
  b.start();
}