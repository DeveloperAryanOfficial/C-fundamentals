/*      classes and objects

        c++ initially called c with classses by stroustroup
        class extension of structure (in c )
        structures had limitations ---- members are public ,no methods ,
        classes = structures + more
        classes can have an methods and properties
        Classes --> can make few members as private and few as public
        Structures in c++ are typedefed
        You can declare objects along with the class declaration

*/

// Nesting of member function

#include <iostream>
#include <string.h>

using namespace std;

// class binary
// {
//     string s;

// public:
//     void read(void);
//     void chk_bin(void);
//     void ones(void);
//     void display(void);
// };

// void binary :: read(void){
//     cout<<"Enter a binary bber"<<endl;
//     cin>>s;
// }
// void binary:: chk_bin(void){
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i)!='0' && s.at(i)!='1')
//         {
//             cout<<"Incorrect Binary format"<<endl;
//             exit(0);
//         }
        
//     }
    
// }

// void binary :: ones(void){
//     for (int i = 0; i < s.length(); i++)
//     {
//         if(s.at(i)=='1'){
//             s.at(i)='0';
//         }
//         else{
//             s.at(i)='1';
//         }
//     }
    
// }
// void binary :: display(void){
//     for (int i = 0; i < s.length(); i++)
//     {
//         cout<<s.at(i);
//     }
//     cout<<endl;
// }

class binary{
    string s;
    public: 
    void read(void);
    void chk_bin(void);
    void Ones_complement(void);
    void display(void);
};

    void binary :: read(void){
        cout<<"Enter the binary number "<<endl;
        cin>>s;
    }
    void binary :: chk_bin(void){
        for (int i = 0; i < s.length(); i++)
        {
            if ((s.at(i)!= '1') && (s.at(i) != '0'))
            {
                cout<<"Incorrect binary format"<<endl;
                exit(0);
            }
            
        }
        
    }

    void binary :: Ones_complement(void){
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i)=='1')
            {
                s.at(i)='0';
            }
            else{
                s.at(i)='1';
            }
            
        }
        
    }

    void binary :: display(void){
        for (int i = 0; i < s.length(); i++)
        {
            cout<<s.at(i)<<endl; 
        }
        
    }


int main()
{
    binary b;
    b.read();
    
    b.chk_bin();
    b.display();

    b.Ones_complement();
    cout<<"After ones complement"<<endl;
    b.display();

    return 0;
}