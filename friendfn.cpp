#include<iostream>
using namespace std;
class Demo{
    int a,b;
    public:
    Demo(int c,int d){
        a=c;
        b=d;
    }
    friend int sum(Demo);
};
int sum(Demo a){
    return a.a+a.b;

}
int main(){
    int a,b;
    cout<<"enter the vlaue of a and b"<<endl;
    cin>>a>>b;
    Demo d(a,b);
    cout<<"the sum of two integer numbers using friend fumction is "<<sum(d)<<endl;

}