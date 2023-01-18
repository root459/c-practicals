#include<iostream>
using namespace std;
class Op{
    int num1;
    public:
    void getData(){
        cout<<"enter the value";
        cin>>num1;
    }
    void show(){
        cout<<"the value is "<<num1;
    }
    void operator=(Op c){
        num1=c.num1;
        
    }
};
int main(){
    Op a,b;
    a.getData();
    b=a;
    b.show();

}