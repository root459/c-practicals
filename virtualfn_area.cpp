#include<iostream>
using namespace std;
class Rectangle{
    int length,breadth;
    public:
    virtual void getData(){
        cout<<"enter the value of length and breadth"<<endl;
        cin>>length>>breadth;
    }
    virtual void Area(){
        cout<<"the area of the rectangle is ="<<length*breadth<<endl;
    }
};
class Square:public Rectangle{
    int side;
    public:
    void getData(){
        cout<<"enter the side of the square"<<endl;
        cin>>side;
    }
    void Area(){
        cout<<"the area of the square is "<<side*side<<endl;
    }

};
int main(){
Square s;
Rectangle *ptr;
ptr=&s;
ptr->getData();
ptr->Area();
Rectangle r;
ptr=&r;
ptr->getData();
ptr->Area();
}


