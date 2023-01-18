#include<iostream>
using namespace std;
struct employ{
    int age,salary;
    string name;
    public:
    void getValue(){
        cout<<"enter name,age and salary of employee";
        cin>>name>>age>>salary;
    }
     void display(){
        cout<<"the details of employee are"<<endl<<"name :"<<name<<endl;
        cout<<"age :"<<age<<endl<<"salary :"<<salary<<endl;
     }   

};
int main(){
    struct employ a[2];
    for(int i=0;i<5;i++){
        a[i].getValue();
    }
    for(int i=0;i<5;i++){
        cout<<i<<" :";
        a[i].display();
    }
}