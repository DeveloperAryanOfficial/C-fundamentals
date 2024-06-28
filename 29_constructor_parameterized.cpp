#include<iostream>

using namespace std;

class complex{
    int a ,b;
    public: 
        complex(void);   // This is the default constructor 
        complex(int , int);   // This is the parameterized constructor 
        
        void display(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
        complex :: complex(void){      // -----> This is the default constructor It is automatically run
            a = 0;
            b = 0;
        }
        complex :: complex(int x , int y){    // This is the parameterized constructor 
            a = x;
            b = y;
        }

int main (){

    // This is for default constructor 
    // complex o1;
    // o1.display();   


    // This is for parameterized constructor 
    // Implicit call
    complex o1(4,9);
    o1.display();

    // Explicit call , 
    complex a = complex(5, 6);
    a.display();   


    
    return 0;
}
