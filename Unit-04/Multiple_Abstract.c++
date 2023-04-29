#include<iostream>
using namespace std;

class A{
    public :
        virtual void add(int, int) = 0;
};

class B: public A{
    public :
        void add(int a, int b)
        {
            cout<<"\nB:"<<a+b;
        }
};

class C: public A{
    public:
        void add(int a, int b)
        {
            cout<<"\nC:"<<a+b;
        }
};

int main()
{
    A *ob[2];
    B b;
    C c;
    ob[0] = &b;
    ob[1] = &c;
    // ob[0] = new B;
    // ob[1] = new C;
    ob[0]->add(1,2);
    ob[1]->add(2,3);
}