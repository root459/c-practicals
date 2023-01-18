//2nd
#include<iostream>
using namespace std;
class Base{
    public:
   virtual void display(){
        cout<<"base class"<<endl;
    }
};
class Derrived:public Base{
    public:
    void display(){
        cout<<"derrived class show"<<endl;
    }
};
int main(){
    Derrived obj;
    Base *pb;
    // Derrived *pd;
    pb=&obj;
    pb->display();//base class display overridden by derrived class



}