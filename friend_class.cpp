#include<iostream>
using namespace std;
class Square;
class Rectangle{
    int breadth,length;
    public:
    Rectangle(int a,int b){
        length=a;
        breadth=b;
    }
    int RectangleArea(){
        return length*breadth;
    }
    friend Square;
};
class Square{
      
    public:
   int SquareArea(Rectangle &d){
    return d.length*d.length;
   }
   
    
};
int main(){
    int length,breadth;
    cout<<"enter the value of length and breadth"<<endl;
    cin>>length>>breadth;
    Rectangle A(length,breadth);
    Square B;
    cout<<"the area of rectangle is "<<A.RectangleArea()<<endl;
    cout<<"the area of square is "<<B.SquareArea(A)<<endl;
}