#include<iostream>

using namespace std;

class simple{
    int data1, data2;
    public:
        simple(int a , int b=9){    // Constructor with default argument
            data1 = a;
            data2 = b;
        }
        void putdata(void){
            cout<<"The complex value is ("<<data1<<" + "<<data2<<"i)"<<endl;
        }

};

int main (){

    simple a(4);
    a.putdata();
    

    return 0;
}