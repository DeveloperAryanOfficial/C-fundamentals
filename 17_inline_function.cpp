#include<iostream>

using namespace std;

// it will take more time to execute because firstly it will copy the actual arguments to the formal arguments after this it will calculate the program then will return the value to calling function

// int product(int a , int b){
    //     return a*b;
// }
    

    // if we want to save our time , we can use inline function but it will use when the function code is around one or two lines only
    // inline int product(int a , int b){
    //     return a*b;
    // }

    // Dont use when recursion and static variable 
    // inline int product(int a , int b)
    // {
    //     static int c = 0;
    //     c = c + 1;
    //     return a*b+1;
    // }     


    int MoneyRecieved(int CurrentMoney , float factor=1.04) {
        return CurrentMoney*factor;
    }

    // int strlen(const char *p){      Constant functions 

    // }



int main (){

    // int a, b;
    // cout<<"Enter the value of a and b : ";
    // cin>>a>>b;
    // cout<<endl;

    int Money=1000;
    // cout<<"The product of a and b is : "<<product(a,b)<<endl;
    
    cout<<"If you have "<<Money<<"rs in your bank account, you will receive "<<MoneyRecieved(Money)<<"rs after 1 year"<<endl;

    cout<<"For VIP : If you have "<<Money<<"rs in your bank account, you will receive "<<MoneyRecieved(Money,2)<<"rs after 1 year"<<endl;

    return 0;
}