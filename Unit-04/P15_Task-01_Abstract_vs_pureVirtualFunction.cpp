#include<iostream>
using namespace std;

class Base{
    public:
        virtual int add(int a,int b) = 0;
        //isme abstract class ka object nahi banta hai islie iska reference dia hai
};

class Derived:public Base{
    public:
        int add(int a,int b)
        {
            cout<<"\ncalled";
            return a+b;
        }
};

int main()
{
    Base *derived = new Derived();
    cout<<"\n"<<derived->add(60,9);
}