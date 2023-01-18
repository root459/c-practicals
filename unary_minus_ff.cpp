#include<iostream>
using namespace std;
class Op{
    int value;
    public:
 void getData(){
    cout<<"enter the value";
    cin>>value;
 }   
    void show(){
        cout<<"the vlaue is "<<value;
    }
    friend void operator-(Op&);
};
void operator-(Op &a){
    a.value=-a.value;
}
int main(){
    Op d;
    d.getData();
    d.show();
    -d;
    d.show();
}