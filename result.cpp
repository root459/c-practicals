#include<iostream>
using namespace std;
class Result{
   
    int maths,eng,sst,hindi;
    
    public:
    void getValue(){
        
        
       
        cin>>maths>>eng>>sst>>hindi;

    }
    void display(){
        cout<<"the marks of the student  are "<<endl;
        cout<<"maths :"<<maths<<endl;
        cout<<"hindi :"<<hindi<<endl;
        cout<<"english :"<<eng<<endl;
        cout<<"sst   :"<<sst<<endl;
    }
    int percentage(){
        int total=eng+hindi+maths+sst;
        return (total*100)/400;
    }

};
int main(){
    Result a[5];
    for(int i=0;i<5;i++){
         cout<<"enter the marks of the student of maths ,eng ,sst ,hindi of roll no "<<i+1<<"student"<<endl;
        a[i].getValue();

    }
    for(int i=0;i<5;i++){
        cout<<"roll no."<<i+1<<endl;
        a[i].display();
       cout<<"the percentage gained by this child is "<< a[i].percentage()<<"%"<<endl;

    }
    
}