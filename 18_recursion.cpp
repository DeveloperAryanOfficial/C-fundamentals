#include<iostream>

using namespace std;

    int fib(int n){
        if(n<2){
            return 1;
        }
        return fib(n-2) + fib(n-1);
    }

int main (){

    int a; 
    cout<<"Enter terms : ";
    cin>>a;
    cout<<endl;

    cout<<"The fibonacci term at the position "<<a<<" is "<<fib(a)<<endl;

    return 0;
}