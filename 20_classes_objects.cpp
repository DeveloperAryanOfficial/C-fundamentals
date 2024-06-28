#include<iostream>

using namespace std;

class Employee
{
private:
    int a , b, c;      // data member
public:
int d, e;
   void setdata(int a1 , int b1 , int c1); // member function
   void getdata(){
    cout<<"The value of a is : "<<a<<endl;
    cout<<"The value of b is : "<<b<<endl;
    cout<<"The value of c is : "<<c<<endl;
    cout<<"The value of d is : "<<d<<endl;
    cout<<"The value of e is : "<<e<<endl;

    // How to access private functions through public function 
    
   }
};
void Employee :: setdata(int a1 , int b1 , int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main (){

    Employee a;
    a.d=34;
    a.e=56;
    a.setdata(2,6,8);
    a.getdata();

    

    return 0;
}