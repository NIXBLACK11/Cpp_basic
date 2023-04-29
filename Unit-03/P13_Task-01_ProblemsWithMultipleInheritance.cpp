#include<iostream>
using namespace std;

class A{
    public:
        void display(){
            cout<<"A Constructor"<<endl;
        }
};

class B{
    public:
        void display(){
            cout<<"B Constructor"<<endl;
        }
};

class C:public A,public B{
    public:
        C(){
            cout<<"C Constructor"<<endl;
            A::display();
            B::display();
        }
};

int main()
{
    C c;
}