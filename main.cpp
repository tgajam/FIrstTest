#include<iostream>
using namespace std;
class location
{
    int latitude,longitude;

public:
    location(){}
    location(int lg, int lt)
    {
        latitude=lt;
        longitude=lg;
    }

    void show()
    {
        cout<<"latitude="<<latitude<<"and longitude="<<longitude<<endl;

    }

    location operator-(location op2);
    location operator++();
};

location location::operator-(location op2)
{
    location temp;

    temp.latitude= latitude+op2.latitude;
    temp.longitude= op2.longitude+longitude;
    return temp;
}
location location::operator++()
{
    latitude++;
    longitude++;
    return *this;
}

int main()
{
    location op1(20,30),op2(30,40);

    op1.show();
    op2.show();

    op2=++op1;
    cout<<"op2 equals incremented op1"<<endl;
    op2.show();

    op1=op1-op2;

    op1.show();

    return 0;
}
