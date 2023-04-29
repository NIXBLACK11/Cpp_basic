#include<iostream>
using namespace std;

class A{
    public:
        void displayA()
        {
            cout<<"A"<<endl;
        }
};

class B:virtual public A{
    public:
        void displayB()
        {
            cout<<"B"<<endl;
            displayA();
        }
};

class C:virtual public A{
    public:
        void displayC()
        {
            cout<<"C"<<endl;
        }
};

class D:public B,public C{
    public:
        void displayD()
        {
            cout<<"D"<<endl;
        }
};

int main()
{
    D d;
    d.displayA();
}