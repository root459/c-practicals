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
    friend Complex operator+(Complex,Complex);
};
Complex operator+(Complex a,Complex b){
    Complex c;
    c.real=a.real+b.real;
    c.imag=a.imag+b.imag;
    return c;
}
int main(){
    Complex a,b,c;
    a.getData();
    b.getData();
    c=a+b;
    c.show();
}