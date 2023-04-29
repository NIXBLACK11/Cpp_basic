#include<iostream>
using namespace std;

class A{
    private:
        void displayA(){
            cout<<"A";
        }
};

class B{
    public:
        void displayB(){
            cout<<"B";
        }
};

class C{
    protected:
        void displayC(){
            cout<<"C";
        }
};

class D:public A,public B,public C{
    public:
        D(){
            //displayA();
            displayB();
            displayC();
        }
};

int main()
{
    D d;
    //d.displayC();
}