#include<iostream>
using namespace std;

int sum = 30;

int main (){
    /* 
    int a , b , sum=0 ;
    cout << "Enter the value of a : " << endl;
    cin >> a ;
    cout << "Enter the value of b : " << endl;
    cin >> b ;

    sum = a + b ;
    cout << "The sum of a and b is : " << sum << endl;
    cout << "The value of (global variable) sum : " << ::sum << endl;  :: this is a scope resolution operator
    */


    // Float , double and long double literals 
    /*
    float d = 3.14f;
    long double e = 3.14l;

    cout << "The size of 3.14 is "<< sizeof(3.14)<< endl;
    cout << "The size of 3.14f is "<< sizeof(3.14f)<< endl;
    cout << "The size of 3.14F is "<< sizeof(3.14F)<< endl;
    cout << "The size of 3.14l is "<< sizeof(3.14l)<< endl;
    cout << "The size of 3.14L is "<< sizeof(3.14L)<< endl;
    */

   // Reference Operator 
   /*
   int a = 34;
   int & b = a ;  Reference Operator
   cout << b << endl;  
   cout << a << endl;
   */

  //Typecasting
  /*
  float a = 3.14;
  cout << "Before typecasting , the value of a : " << a << endl;
  cout << "After typecasting , the value of a : " << (int)a << endl;
  cout << "After typecasting , the value of a : " << int(a) << endl;
  float c = int(a);
  */

    return 0;
}