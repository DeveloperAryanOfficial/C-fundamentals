#include<iostream>

using namespace std;
// funcions overloading in c++

// volume of cylender
float volume(float r, float h){
    return (3.14*r*r*h);
}


// Volume of cube
int volume(int a){
    return (a*a*a);
}
int volume(float a){
    return (a*a*a);
}

//Volume of rectangular box
int volume(int l, int b, int h){
    return (l*b*h);
}

int main (){

    cout<<"The volume of cylender is : "<<volume(5.5 , 2.1)<<endl;
    cout<<"The volume of cube is : "<<volume(5)<<endl;
    // cout<<"The volume of cube is : "<<volume(5.8)<<endl;    it is not possible 
    cout<<"The volume of rectangular box is : "<<volume(5 , 6, 7)<<endl;
    

    return 0;
}