#include<iostream>
using namespace std;
class Marks{
    int maths,oops,dsa,se;
    public:
    void getValue(int a,int b,int c=40,int d=40){
        maths=a;
        se=b;
        oops=c;
        dsa=d;
    }
    int total(){
        return maths+oops+dsa+se;
    }
};
int main(){
    int maths,oops,dsa,se;
    cout<<"enter the marks of oops ,se ,dsa , maths"<<endl;
    cin>>oops>>se>>dsa>>maths;
    Marks a;
    a.getValue(maths,se);
    cout<<"the total marks of all subjects are"<<a.total()<<endl;
    Marks b;
    b.getValue(maths,se,oops,dsa);
    cout<<"the total marks of all subjects are"<<b.total();

}