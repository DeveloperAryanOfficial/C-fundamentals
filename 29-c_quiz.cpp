#include <iostream>
#include <math.h>
using namespace std;

class firstPoint
{
    int a, b;
    friend void distance (firstPoint,firstPoint);

public:
    firstPoint(int x, int y)
    {
        a = x;
        b = y;
    }
    void PutData(void)
    {
        cout << "Point is : (" << a << ", " << b << ")" << endl;
    }
};

void distance(firstPoint o1, firstPoint o2)
{
    float d = sqrt(((o2.a-o1.a)*(o2.a-o1.a)) + ((o2.b-o1.b)*(o2.b-o1.b)));
    cout<<"Distance between two cardinal points is : "<<d<<"cm"<<endl;
}

int main()
{
    firstPoint o1(2, 3);
    o1.PutData();

    firstPoint o2(5, 6);
    o2.PutData();

    distance(o1,o2);


    return 0;
}