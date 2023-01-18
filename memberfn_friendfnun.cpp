#include<iostream>
using namespace std;
class B;
class A{
    int a,b;
    public:
    void getValue(){
        cout<<"enter the value of a and b";
        cin>>a>>b;
    
    }
    int sum(B &){
     return a+b;   
    }
};
class B{
    int a,b;
    public:
    B(int c,int d){
        a=c;
        b=d;
    }
    friend int A::sum(B&a);
    
};
int main(){
    A a;
    B b(12,13);
    cout<<a.sum(b);

}