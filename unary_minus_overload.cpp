#include<iostream>
using namespace std;
class Oprator{
    int value;
    public:
    void getData(){
        cout<<"enter the value";
        cin>>value;
    }
    void Show(){
        cout<<"vluae is "<<value;
    }
    void operator-(){
        value=-value;
    }
};
int main(){
    Oprator a;
    a.getData();
    a.Show();
    -a;
    a.Show();
}