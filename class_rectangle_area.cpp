#include<iostream>
using namespace std;
class Rectangle{
    int length,breadth;
    public:
    void getValue(int a,int b){
        length=a;
        breadth=b;

    }
    int area(){
        return length*breadth;
    }
};
int main(){
    int len,breadth,area;
    cout<<"enter the value of length and breadth"<<endl;
    cin>>len>>breadth;
    Rectangle a;
    a.getValue(len,breadth);
    cout<<"the area of rectangel is "<<a.area();


}