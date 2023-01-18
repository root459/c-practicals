#include<iostream>
using namespace std;
class Rectangle{
    int length,breadth;
    public:
    Rectangle(){
        breadth=length=0;
    }
    Rectangle(int x){
        length=breadth=x;
    }   
    Rectangle(int x,int y){
        length=x;
        breadth=y;
    }
    void Display(){
        cout<<"the value of a length is "<<length<<"breadth is "<<breadth<<endl;
        cout<<"the area of the rectangle is"<<length*breadth<<endl;
    }

};
int main(){
    int a,b;
    cout<<"enter the vlaue of a and b"<<endl;
    cin>>a>>b;
    Rectangle c;
    Rectangle d(a);
    Rectangle e(a,b);
    Rectangle f(e);
    Rectangle g=d;
    c.Display();
    d.Display();
    e.Display();
    f.Display();
    g.Display();
}