#include<iostream>

using namespace std;

int main (){

    
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;

    // print this array with the help of loop 
    // for (int i = 0; i < 4; i++)
    // {
    // cout<<marks[i]<<endl;
    // }




    // int i=0;

    // while (i<4)
    // {
    //     cout<<marks[i]<<endl;
    //     i++;

    // }

    // do
    // {
    //     cout<<marks[i]<<endl;
    //     i++;

    // } while (i<4);
    
    
    int marks[5]={12,23,45,43,52};

    int * a = marks;
    // We have three approaches to find the address of array first pointer 
    // cout<<"The address of marks array variable is : "<<marks<< endl;
    // cout<<"The address of marks array variable is : "<< &marks[0]<< endl;
    // cout<<"The address of marks array variable is : "<< a<< endl;


    // Pointer value using indexing
    // cout<<"The address of marks array variable is : "<< &marks[0]<< endl;
    // cout<<"The address of marks array variable is : "<< &marks[1]<< endl;
    // cout<<"The address of marks array variable is : "<< &marks[2]<< endl;
    // cout<<"The address of marks array variable is : "<< &marks[3]<< endl;


    // We have four approaches to find the value of first element of the array 
    //The value using dereference operator
    cout<<"The address of marks array variable is : "<< *(&marks[0])<< endl;
    cout<<"The address of marks array variable is : "<< marks[0]<< endl;
    cout<<"The address of marks array variable is : "<< *a<< endl;
    cout<<"The address of marks array variable is : "<<*marks<< endl;
    
    // cout<<"The address of marks array variable is : "<< *(&marks[1])<< endl;
    // cout<<"The address of marks array variable is : "<< *(&marks[2])<< endl;
    // cout<<"The address of marks array variable is : "<< *(&marks[3])<< endl;


    // POinter value using pointer arithmetic
    // cout<<"The address of marks : "<< a << endl;
    // cout<<"The address of marks : "<< a+1 << endl;
    // cout<<"The address of marks : "<< a+2 << endl;
    // cout<<"The address of marks : "<< a+3 << endl;


    //The value using dereference operator
    // cout<<"The address of marks : "<< *a << endl;
    // cout<<"The address of marks : "<< *(a+1) << endl;
    // cout<<"The address of marks : "<< *(a+2) << endl;
    // cout<<"The address of marks : "<< *(a+3) << endl;



    return 0;
}