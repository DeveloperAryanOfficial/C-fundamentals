#include<iostream>

using namespace std;

class point {
    int x , y;

    public:
        point(int a , int b){        // parameterized constructor 
            x = a;
            y = b;
        }
        void display_point(void){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }
};

int main (){

    point a(5, 6);
    a.display_point();

    point b(5, 7);
    b.display_point();
    return 0;
}


// Quick quiz
// Create a fucntion (Hint : make it a friend fucntion) which takes two points objects and computes the distance between those points