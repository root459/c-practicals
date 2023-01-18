#include<iostream>
using namespace std;
class Constructor{
    int id;
    string name;
    public:
    Constructor(){
        cout<<"enter name of the student and id"<<endl;
        cin>>name>>id;
    }
    void display(){
        cout<<"name: "<<name<<"  id :"<<id<<endl;
    }
};
int main(){
    Constructor a[3];
    for(int i=0;i<3;i++){
        a[i].display();
    }
}