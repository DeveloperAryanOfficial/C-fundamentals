#include<iostream>
using namespace std;

int main (){
    int age ;

    cout << "Enter your age : " << endl ;
    cin >> age ;


    // Selection control structure 
    // if ((age < 18) && (age > 0 ))
    // {
    //     cout << "You can't come to my party"<< endl;
    // }
    // else if (age < 1){
    //     cout << "You are not yet born"<< endl;
    // }
    // else if (age == 18)
    // {
    //     cout << "You are a kid and you willl get a kid pass to the party"<< endl ;
    // }
    // else
    // {
    //     cout << "You can come to the party"<< endl;
    // }


    //Switch case statement
    switch (age)
    {
    case 18:
        cout << "You are 18"<< endl;
        break;
    case 22:
        cout << "You are 22"<< endl;
        break;
    case 2:
        cout << "You are 2"<< endl;
        break;
    
    default:
    cout << "No special cases" << endl;
        break;
    }
    
    
    




    return 0;
}