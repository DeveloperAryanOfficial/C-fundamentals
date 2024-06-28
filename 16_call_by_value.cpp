#include<iostream>

using namespace std;

// int sum(int a , int b){
//     int c = a + b;
//     return c;
// }


// swap two numbers using pointers  ( Call by reference )
int swapPointer(int* a, int* b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
        *a=90;
        *b=99;
}



// Using reference variable swap two numbers
// int swapReferenceVar(int & a, int & b){
//     // int temp = a;
//     // a = b;
//     // b = temp;

// }

int main (){

    int a = 5, b = 4;

    //cout<<"The sum of a and b is : "<<sum(a,b)<<endl;   (call by value)



    cout<<"The value of a is "<<a<<" And the value of b is "<<b<<endl;
    swapPointer(&a,&b);  // this will swap a and b
    // swapReferenceVar(a , b);  This will also swap a and b using reference variable 
    cout<<"After swapping the numbers "<<endl;
    cout<<"The value of a is "<<a<<" And the value of b is "<<b<<endl;

    

    return 0;
}