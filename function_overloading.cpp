#include<iostream>
using namespace std;
class Overload{
    int num1,num2;
    float num3;
    public:
    Overload(int a,int b,float c){
        num1=a;
        num2=b;
        num3=c;
    }
    int sum(int a,int b){
        return a+b;
    }
    float sum(int a,float c){
        return a+c;
    }
    float sum(float c,float d){
        return c+d;
    }
};
int main(){
    int a,b;
    float c;
    cout<<"enter the value of a and b and c"<<endl;
    cin>>a>>b>>c;
    Overload d(a,b,c);
    cout<<"the sum of two integer is"<<d.sum(a,b)<<endl;
    cout<<"the sum of one float and one integer is"<<d.sum(b,c)<<endl;
    cout<<"the sum of two float is "<<d.sum(c,c)<<endl;
    
}