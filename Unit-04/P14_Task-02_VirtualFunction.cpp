#include<iostream>
using namespace std;

class Base{
    public:
        virtual int add(int a,int b)
        {
            cout<<"\nbase class add int";
            return a+b+5;
        }
        int add(int a,float b)
        {
            cout<<"\nbase class add float";
            return a+b+10;
        }
};

class Derived:public Base{
    public:
        int add(int a,float b)
        {
            cout<<"\nderived class add float";
            return 20+a+b;
        }
        int add(int a,int b)
        {
            cout<<"\nderived class add int";
            return a+b+15;
        }
};

int main()
{
    int a = 5;
    float b1 = 10.99454;
    int b2 = 10;
    Base *derived = new Derived();
    cout<<"\n"<<derived->add(a,b1);
    Base *base = new Base();
    cout<<"\n"<<base->add(a,b1);
    cout<<"\n"<<base->add(a,b2);
    cout<<"\n"<<derived->add(a,b2);
}