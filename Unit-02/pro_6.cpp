#include<iostream>
using namespace std;
class Complex{
    public:
        int a;
        Complex(int a)
        {
            this->a = a;
        }
        int operator+(Complex &ob)
        {
            return (this->a + ob.a);
        }
        int operator-(Complex &ob)
        {
            return (this->a - ob.a);
        }
};
int main()
{
    Complex A1(5);
    Complex A2(4);
    int sum = A1+A2;
    int diff = A1-A2;
    cout<<sum<<endl;
    cout<<diff<<endl;
}