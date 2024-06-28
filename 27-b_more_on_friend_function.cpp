#include <iostream>
using namespace std;

class second;

class first
{
    int a;
    friend void ExchangeTheValue(first &, second &);

public:
    void setdata(int x)
    {
        a = x;
    }
    void getdata(void)
    {
        cout << a << endl;
    }
};

class second
{
    int a;
    friend void ExchangeTheValue(first &, second &);

public:
    void setdata(int x)
    {
        a = x;
    }
    void getdata(void)
    {
        cout << a << endl;
    }
};

void ExchangeTheValue(first & x , second & y)
{
    int temp = x.a;
    x.a = y.a;
    y.a = temp;
}

int main()
{
    system("cls");

    first x;
    x.setdata(5);
    x.getdata();

    second y;
    y.setdata(6);
    y.getdata();

    ExchangeTheValue(x , y);

    cout<<"After exchanging the value of first class is : ";
    x.getdata();
    cout<<"After exchanging the value of second class is : ";
    y.getdata();

    return 0;
}