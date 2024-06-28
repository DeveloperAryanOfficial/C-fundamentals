#include<iostream>
#include<iomanip>
using namespace std;

class Employee{
    int ID;
    static int count;
    public:
        void SetData(void){
            cout<<"Enter the ID of the employees"<<endl;
            cin>>ID;
            count++;
        }
        void GetData(void){
            cout<<"Employees no : "<<count<<endl;
            cout<<"The ID of the employee is "<<ID<<endl;  
        }
        void Count(void){
            
        }
        static void display(void){
            cout<<"print the no of count"<<count<<endl;  
            // It always take static variable not another variable .
        }

};
int Employee::count=54;  // defaualt value is 0


int main (){
    Employee a,b,c;
    a.SetData();
    a.GetData();
    a.display();

    b.SetData();
    b.GetData();
    b.display();

    c.SetData();
    c.GetData();
    c.display();

    

    return 0;
}