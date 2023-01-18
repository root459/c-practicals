#include<iostream>
using namespace std;
class Student{
    protected:
    int roll;
    string name;
    public:
    Student(){
        cout<<"enter the name and roll no of the student"<<endl;
        cin>>name>>roll;
        
    }

};
class Test:public virtual Student{
    protected:
    int Obj_marks,Des_marks;
    public:
    Test(){
        cout<<"enter the obj and des marks"<<endl;
        cin>>Obj_marks>>Des_marks;
    }
};
class Sports:public virtual Student{
    protected:
    int addi_marks;
    public:
    Sports(){
        cout<<"enter the marks of the sports"<<endl;
        cin>>addi_marks;
    }
};
        
class Result:public Test,public Sports{
    int total;
    public:
    void marks(){
        cout<<"the total marks of the student are"<<Obj_marks+Des_marks+addi_marks;
    }
};
int main(){
    Result r;
    r.marks();
}