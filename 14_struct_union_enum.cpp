#include<iostream>

using namespace std;

    typedef struct employees
    {
        int emp_id;
        char name;
        float salary;
        
    }emp;

    union money
    {
        int rice;
        char car;
        float pounds;
        
    };
    

int main (){

    // emp aryan;
    // aryan.emp_id= 20001;
    // aryan.name= 'A';
    // aryan.salary=12546;
    // cout << "Details : " << endl << aryan.emp_id << endl<< aryan.name << endl << aryan.salary << endl;



    // union money m1 ;
    // m1.rice = 56;
    // m1.car = 't';
    // cout<< m1.rice << endl;
    // cout<< m1.car << endl;




    // enum meal {
    //     breakfast,
    //     lunch,
    //     dinner,
    //     fast
    // };

    // cout << breakfast << endl;
    // cout << dinner << endl;
    // cout << lunch << endl;
    // cout << fast << endl;
    

    return 0;
}