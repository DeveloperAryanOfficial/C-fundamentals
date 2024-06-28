#include<iostream>

using namespace std;

int global = 45 ;

void sum(){
    int global = 87 ;     //local variable have presidence than global variable
    int a ; 
    cout << global ;
}

int main(){

    int a = 4 , b = 5 ;

    float PI = 3.14;

    cout << "Today I'm learning variables and datatypes in c++ \n" << "The value of a is : " << a << " and " << "\nThe value of b is : " << b << endl ;

    cout << "The value of PI is : " << PI << endl ;

    sum();

    return 0;
}