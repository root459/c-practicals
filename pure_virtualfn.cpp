#include<iostream>
using namespace std;
class Base{
    protected:
    int value;
    public:
    virtual void getValue()=0;
    virtual void show()=0;
};
class Derrived:public Base{
    public:
    void getValue(){
        cout<<"enter the value ";
        cin>>value;

    }
    void show(){
        cout<<"the value is "<<value;
    }
};
int main(){
    Derrived obj;
    Base *ptr;
    ptr=&obj;
    ptr->getValue();
    ptr->show();
}
