#include<iostream>
using namespace std;
class Exception{
    public:
    Exception(){
        cout<<"exception handled by class exception"<<endl;

    }
    void display(int a){
        cout<<"exception handled of int type"<<endl;
        throw a;}
    void display(float a){
        cout<<"exception handled of float type"<<endl;
        throw a;}
    void display(char a){
        cout<<"exception handled of char type"<<endl;
        throw a;}
    };
int main(){
    int a;
    float b;
    char c;
    cout<<"enter the value of int a float b char c"<<endl;
    cin>>a>>b>>c;
    try{
        Exception e;

        e.display(a);
    }
    catch(int a){
        cout<<"integer value is"<<a<<endl;
    }
    try{
        Exception e;
        e.display(b);
    }
    catch(float b){
        cout<<"float value is"<<b<<endl;
    }
try{
        Exception e;
        e.display(c);
    }
    catch(char c){
        cout<<"char  value is"<<c<<endl;
    }
}