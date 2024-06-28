#include <iostream>
using namespace std;

int count;
class Organisation
{
    char EmployeeID[100];
    char EmployeePinCode[100];
    char EmployeeAge[100];
    char EmployeeMobileNo[100];
    char EmployeeSalary[100];
    static int counter ;

public:
    
    void Input(void);
    void GetData(void);
};

void Organisation::Input(void)
{
    cout<<"Enter Your employee Id : ";
    cin>>EmployeeID;
    cout<<endl;
    cout<<"Enter Your employee PinCode : ";
    cin>>EmployeePinCode;
    cout<<endl;
    cout<<"Enter Your employee Age : ";
    cin>>EmployeeAge;
    cout<<endl;
    cout<<"Enter Your employee MobileNo : ";
    cin>>EmployeeMobileNo;
    cout<<endl;
    cout<<"Enter Your employee Salary : ";
    cin>>EmployeeSalary;
    cout<<endl;
    count = counter++;
}


void Organisation::GetData(void){
    cout<<"Employee ID is : "<<EmployeeID<<" , Pincode is : "<<EmployeePinCode<<" , age is : "<<EmployeeAge<<" ,Mobile no is : "<<EmployeeMobileNo<<" and the salary is : "<<EmployeeSalary<<endl;
}

int Organisation :: counter=1 ;
int main()
{
    system("cls");
    Organisation a,b;
    
    a.Input();
    a.GetData();

    
    b.Input();
    b.GetData();


    cout<<"Total members in organisation are : "<<count<<endl;
    

    return 0;
}