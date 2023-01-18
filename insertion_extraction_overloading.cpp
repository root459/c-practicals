#include<iostream>
using namespace std;
class Op{
    int num1;
    public:
    friend void operator>>(istream&,Op&);
    friend void operator<<(ostream&,Op&);

};
void operator>>(istream &in,Op &a){
    cout<<"enter the vlaue of num1";
    in>>a.num1;
}
void operator<<(ostream &out,Op &a){
    out<<"the value of num1 is "<<a.num1;
}
int main(){
    Op a;
    cin>>a;
    cout<<a;
}
