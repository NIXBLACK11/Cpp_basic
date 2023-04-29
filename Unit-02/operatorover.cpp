#include<iostream>
using namespace std;

class A{
    public:
        int a;
        A(int a)
        {
            this->a = a;
        }
        void display()
        {
            cout<<a;
        }
        friend A operator+(A ,A);
};

A operator+(A obj1, A obj2)
{
    A temp(0);
    temp.a = obj1.a + obj2.a;
    return temp;
}

int main()
{
    A obj1(10);
    A obj2(20);
    A temp = obj1+obj2;
    temp.display();
}