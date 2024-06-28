#include<iostream>
using namespace std;


class complex {
    int a ;
    int b;
    public: 
        void setNumber(int n1 , int n2){
            a = n1 ;
            b = n2 ;

        }
        void printwalebhaiya(){

            // cout<<"Your first complex no is "<<o1.a<<" + "<<o1.b<<"i"<<endl;
            // cout<<"Your second complex no is "<<o2.a<<" + "<<o2.b<<"i"<<endl;
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }

        friend complex sumcomplex(complex o1 , complex o2);
        
};

complex sumcomplex(complex o1 , complex o2){
    complex c3;     // friend function creates own object using class name because it cant access the local variables .
    c3.setNumber((o1.a + o2.a) , (o1.b + o2.b));
    return c3;
}


int main (){

    system("cls");

    complex c1 , c2 , sum ;

    c1.setNumber(1 , 4);
    c1.printwalebhaiya();
    c2.setNumber(5 , 8);
    c2.printwalebhaiya();

    // c1.printNumber(c1,c2);
    // c2.printNumber(c1,c2);

    // c3.printwalebhaiya();
    sum = sumcomplex(c1 , c2);
    sum.printwalebhaiya();
    // c3.printNumber(c1,c2);

    //1  5
    //4  8

    return 0;
}


// Properties of friend function
/*
1. Not in the scope of the class 
2. since it is not in the scope of the class , it cannot be called from the object fo that class . c1.sumcomplex == invalid
3. can be invoked without the help of any object
4. Usually contains the objects as the arguements 
5. Can be declared inside public or private section of the class 
6. It cannot access the members directly by their names and need object_name.member.name to access the members of the class .



*/