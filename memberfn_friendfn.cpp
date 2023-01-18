#include<iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    A(int c){
        a=c;
    }
    void show(B &);
};
class B{
    int b;
    public:
     B(int c){
        b=c;
    }
    friend void A::show(B &);
};
    void A::show(B &c){
        cout<<"the value of both class data members are A="<<a<<"  B="<<c.b<<endl;

    }

int main(){
    int a,b;
    cout<<"enter the vlaue of a and b";
    cin>>a>>b;
    A e(a);
    B f(b);
    e.show(f);
}
