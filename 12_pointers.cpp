#include<iostream>

using namespace std;

int main (){

    //What is pointer in c++ ---> Pointer is a variable which can holds address of another variable 
    int a=4;
    int* b = &a;

    // & ----> Address of a variabe 
    cout << "The address of a is : "<<&a<< endl;
    // cout << "The address of a is : "<<b<< endl;

    // * ----> (Value at ) Dereference OPerator
    // cout << "The value at address b is : "<< *b<<endl;
    // cout << "The value at address b is : "<< *(&a)<<endl;

    // Pointer to Pointer 
    int** c ;
    c = &b ;
     
    // This is the current address of b  .
    cout << "The address of b is : "<<c<<endl;
    cout << "The address of b is : "<<&b<<endl;

    // This is the current value of b which is holds address of a. It get through using with single dereference operator.
    // cout << "The value at b is : "<<*c<<endl;
    // cout << "The value at b is : "<<*(&b)<<endl;

    // When we use double dereference operator , we get one step back value means the value of a which is initiallized above . And it dereferences first pointer (declared through single dereference operator.)
    // cout << "The value at b is : "<<**c<<endl;
    // cout << "The value at b is : "<<**(&b)<<endl;


    return 0;
}