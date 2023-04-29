#include<iostream>
using namespace std;

class Base{
    public:
        int add(int a,int b)
        {
            cout<<"\nbase class add int";
            return a+b;
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
            return 60+a+b;
        }
};

int main()
{
    int a = 5;
    float b1 = 10.99454;
    int b2 = 10;
    cout<<"\ncompile time :overloading"; 
    Base base;
    printf("\n%d",base.add(a,b2));
    printf("\n%d",base.add(a,b1));
    cout<<"\nrun time :overridding";
    Derived derived;
    printf("\n%d",base.add(a,b2));
    printf("\n%d",derived.add(a,b2));
}