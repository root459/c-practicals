#include<iostream>
using namespace std;
class Area{
    int radius;
    public:
    Area(int a){
        radius=a;
    }
    float circle_Area(const float pi=3.14){
        return pi*radius*radius;

    }
};
int main(){
    int radius;
    cout<<"enter the value of readius"<<endl;
    cin>>radius;
    Area a(radius);
    cout<<"the area of the circle is"<<a.circle_Area();
}
