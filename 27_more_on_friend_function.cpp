#include<iostream>
using namespace std;

class y;

class x{
    int data ;
    public:
        void setdata(int a){
            data = a;
        }
        void print(void){
            cout<<"The value of data is : "<<data<<endl;
        }
        friend void sum(x , y);
};

class y{
    int data ;
    public:
        void setdata(int a){
            data = a;
        }
        void print(void){
            cout<<"The value of data is : "<<data<<endl;
        }
        friend void sum(x , y);
};

void sum(x o1 , y o2){
    cout<<"The sum of two elements of different classes is : "<<(o1.data+o2.data);
}

int main (){

    x x;
    x.setdata(5);
    x.print();

    y y;
    y.setdata(6);
    y.print();

    sum(x , y);
    

    return 0;
}