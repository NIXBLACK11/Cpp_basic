#include<iostream>
using namespace std;

class A{
    public:
        A(){
            cout<<"A Constructor"<<endl;
        }
};

class B:public A{
    public:
        B(){
            cout<<"B Constructor"<<endl;
        }
};

int main()
{
    B b;
}