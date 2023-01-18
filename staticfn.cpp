#include<iostream>
using namespace std;
class Item{
    int product,price;
    public:
    static int count;
    void getData(){
        cout<<"enter the product_id and price";
        cin>>product>>price;
        count++;
    }
    static void quantity(){
        cout<<"the no. of products are"<<count;
    }
    void display(){
        cout<<"the product id is "<<product<<"price is"<<price;
    }
};
int::Item::count=0;
int main(){
    Item::quantity();
    Item a;
    a.getData();
    a.getData();
    a.display();
    a.quantity();
    
    
}
   
    

    
    
