#include<iostream>
using namespace std;

class A{
    protected:
        int a = 69;
};

class B : protected A{
    protected:
        void display()
        {
            cout<<"a";
        }
};

int main()
{
    B ob;
    ///  Error dega ye : cout<<ob.a;
}