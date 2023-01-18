#include<iostream>
using namespace std;
template<class t,class t2>
class Temp{
    t num1;
    t2 num2;
    public:
    Temp(t a,t2 b){
        num1=a;
        num2=b;
    }
    t2 sum(){
        return num1+num2;
    }
};
int main(){
    int a;
    float b;
    cout<<"enter the value of int a and float b";
    cin>>a>>b;
Temp<int,float>e(a,b);
Temp<int,int>z(a,a);
Temp<float,float>x(a,a);
cout<<"the sum of int and float is"<<e.sum();
cout<<"the sum of int and int is"<<z.sum();
cout<<"the sum of float and float is"<<x.sum();
}

