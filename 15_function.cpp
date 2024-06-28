#include<iostream>

using namespace std;

// int sum(int, int);             // acceptable
int sum(int a, int b);      // acceptable
int main (){
    int a, b;
    cout<<"Enter first number"<<endl;
    cin >>a;
    cout<<"Enter second number"<<endl;
    cin >>b;
    cout<<"The sum is "<<sum(a, b);  // actual parameters
 

    return 0;
}
// int sum(int, int){         // acceptable
int sum(int a, int b){   // formal parameters
    int  c = a + b;
    return c;
}

