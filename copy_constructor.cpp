#include<iostream>
using namespace std;
class Demo{
    int num1,num2;
    public:
    Demo(){
        num1=0;
        num2=0;
    }
    Demo(int a,int b){
        num1=a;
        num2=b;
    }
    Demo(Demo &e){
        num1=e.num1;
        num2=e.num2;
    }
    void Display(){
        cout<<"value of num1 is "<<num1<<"and num2 is "<<num2<<endl;
    }
};
int main(){
    int a,b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    Demo t;
    Demo s(a,b);
    Demo d=s;
    Demo q(s);
    t.Display();
    s.Display();
    d.Display();
    s.Display();

}