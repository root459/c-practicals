#include<iostream>
using namespace std;
template<class t>
void show(t a){
    cout<<"the value of a is "<<a;
}
void show(int a){
    cout<<"the value of n is "<<a;
}
int main(){
    show(15.5);
    show(5);
}
