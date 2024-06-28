#include <iostream>

using namespace std;

class complex;

class calculator
{

public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumRealcomplex(complex, complex);
    int sumCompcomplex(complex, complex);
};

class complex
{
    int a;
    int b;

    // this method is for individual friendship with other class function 
    // friend int calculator ::sumRealcomplex(complex, complex);
    // friend int calculator ::sumCompcomplex(complex, complex);



    // If you want to make entire class as a friend you can use 
    friend class calculator; 

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
};

int calculator::sumRealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::sumCompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{

    complex a, b;
    a.setNumber(1, 3);
    b.setNumber(9, 4);

    calculator calculator;
    int ref = calculator.sumRealcomplex(a, b);
    int refc = calculator.sumCompcomplex(a, b);
    cout << "The sum of realpart of the complex number " << ref << endl;
    cout << "The sum of complex part of the complex number " << refc <<"i"<< endl;

    return 0;
}