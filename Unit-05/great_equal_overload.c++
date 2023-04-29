#include<iostream>
using namespace std;

class A{
    public:
        int a;
        A(int a)
        {
            this->a = a;
        }
        bool operator>=(A ob)
        {
            if(this->a>=ob.a)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};

int main()
{
    A a(100);
    A b(20);
    if(a>=b)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
}