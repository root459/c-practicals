#include<iostream>
using namespace std;
class Complex{
    int real,imag;
    public:
    void getData(){
        cout<<"enter the real and imag part of complex number";
        cin>>real>>imag;
    }
    void show(){
        cout<<"the complex number is"<<real<<"+i "<<imag;

    }
    Complex operator+(Complex c){
        Complex d;
        d.real=real+c.real;
        d.imag=imag+c.imag;
        return d;
    }
};
int main(){
    Complex a,b,c;
    a.getData();
    b.getData();
    c=a+b;
    c.show();
}
        
    