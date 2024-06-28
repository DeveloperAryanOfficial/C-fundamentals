#include<iostream>
#include<iomanip>
using namespace std;

// class complex {
//     int a ;
//     int b ;
//     public:
//         void SetData(int x , int y){
//             a = x;
//             b = y;
//         }
//         void PutData(complex o1 , complex o2){
//             a = o1.a + o2.a;
//             b = o1.b + o2.b;
//         }

//         void display(void){
//             cout<<"The added complex no is : "<<a<<" + "<<b<<"i"<<endl;
//         }
// };

class employee{
    int ID;
    int age ;
    int salary;
    public: 
        void SetData(void){
            cout<<"enter your ID "<<endl;
            cin>>ID;
            cout<<endl<<"Enter your age "<<endl;
            cin>>age;
            cout<<endl<<"Enter your salary"<<endl;
            cin>>salary;

        }

        void PutData(void){
            cout<<"Employees ID is : "<<ID<<" and the his age is : "<<age<<" , overall income is : "<<salary<<endl;
        }
};
int main (){

    system("cls");

    employee a[4];

    for (int i = 0; i < 4; i++)
    {
        a[i].SetData();
        a[i].PutData();
        
    }
    


    // a.SetData();
    // a.PutData();
    // b.SetData();
    // b.PutData();

    // complex o1 , o2 ,o3;

    // o1.SetData(2 , 3);
    // o2.SetData(4 , 5);
    // o3.PutData(o1,o2);
    // o3.display();
    



    return 0;
}