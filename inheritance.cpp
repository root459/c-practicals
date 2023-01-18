#include<iostream>
using namespace std;
class Gp{
    public:
    int age;
    
    Gp(){
        cout<<"enter the age of gp";
        cin>>age;
    }
};
class Parent:public Gp{
    int age;
    public:
    Parent(){
        cout<<"enter the age of parent";
        cin>>age;
    }
    void Differene(){
        cout<<"the difference bw the age of the gp and p is "<<Gp::age-Parent::age;
    }
};
int main(){
    Parent a;
    a.Differene();
}