#include<iostream>

using namespace std;

class complex{
    int a ,b;
    public: 

    // Creating a constructor 
    // Constructor is a special member function with the same name as of the class 
    // It is used to initialize the objects of its class 
    // It is automatically invoked whenever an object is created 

        complex(void);
        
        void display(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

        complex :: complex(void){      // -----> This is the default constructor It is automatically run
            a = 0;
            b = 0;
        }


int main (){

    complex o1;
    o1.display();

    

    return 0;
}


// characteristics of constructor

/*

1. It should be declared in the public section of the class 
2. They are automatically invoked whenever the object is created  
3. They can not return values and do not have return type 
4. It can have default arguments 
5. We cannot refer to their address.

*/