#include<iostream>
using namespace std;
class Student{
    string name;
    int id,marks;
    public:
    Student(string a,int b,int c){
        name=a;
        id=b;
        marks=c;
    }
    void display(){
        cout<<"the name of the student is "<<name<<"id is "<<id<<"marks is "<<marks<<endl;
    }
};
int main(){
    int id,marks;
    string name;
    cout<<"enter the name marks id of the student";
    cin>>name>>marks>>id;
    Student a(name,id,marks);
    a.display();
}