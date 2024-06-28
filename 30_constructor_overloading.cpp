#include<iostream>

using namespace std;

class complex{

    int a ,b;

    public: 

    // Function Overloading
    
        complex(){
            a = 0;
            b = 0;
        }

        complex(int x){
            a = x;
            b = 0;
        }

        complex(int x , int y){
            a = x;
            b = y;
        }
        
        void display(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};


int main (){

    complex o1;
    o1.display();

    complex a(5);
    a.display();

    complex b(5, 6);
    b.display();

    return 0;
}
