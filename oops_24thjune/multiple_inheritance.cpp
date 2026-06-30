#include<iostream>
using namespace std;
class father{
public:
  void house(){
    cout<<"father's house"<<endl;
  }
};
class mother{
    public:
    void jwellery(){
        cout<<"mother's jwellery"<<endl;
    }
};
class child : public father,public mother{
};

int main(){
    child obj;
    obj.house();
    obj.jwellery();
}