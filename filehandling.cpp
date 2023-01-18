#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string data;
    ofstream out;
    ifstream fin;
    out.open("file.txt",ios::app);
    cout<<"enter the data";
    while(out){
        getline(cin,data);
        if(data=="-1"){
            break;
        }
        out<<data<<endl;
    }
    out.close();

fin.open("file.txt",ios::in);
while(fin){
    getline(fin,data);
    cout<<data<<endl;
}
fin.close();
}

