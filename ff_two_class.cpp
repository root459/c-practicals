#include<iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    A(int b){
        a=b;
    }
    friend int sum(A,B);
};
class B{
    int b;
    public:
    B(int c){
        b=c;
    }
    friend int sum(A,B);

};
int sum(A d,B e){
    return d.a+e.b;
}
int main(){
    int a,b;
    cout<<"enter the vlaue of a and b";
    cin>>a>>b;
    A c(a);
    B d(b);
    cout<<"the sum of private members using friend function is"<<sum(c,d);
}