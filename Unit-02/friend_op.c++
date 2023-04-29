#include<iostream>
using namespace std;

class A{
    public:
        int a;
        A()
        {
            a=0;
        }
        A(int a)
        {
            this->a = a;
        }
        void display()
        {
            cout<<this->a;
        }
        friend void operator++(A &, int);
};

void operator++(A &ob, int)
{
    ob.a++;
}

int main()
{
    A ob1(10);
    ob1.display();
    ob1++;
    ob1.display();
}