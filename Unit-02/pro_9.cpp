#include<iostream>
#include<string>
using namespace std;
class Complex{
    public:
        int real;
        int imaginary;
        Complex(int real, int imaginary)
        {
            this->real = real;
            this->imaginary = imaginary;
        }
        void operator+(Complex &ob)
        {
            int img_sum = 0, real_sum = 0;
            img_sum = this->imaginary + ob.imaginary;
            real_sum = this->real + ob.real;
            cout<<real_sum<<"+"<<img_sum<<"i"<<endl; 
        }
        void operator-(Complex &ob)
        {
            int img_diff = 0, real_diff = 0;
            img_diff = this->imaginary - ob.imaginary;
            real_diff = this->real - ob.real;
            cout<<real_diff<<"+"<<img_diff<<"i"<<endl; 
        }
        void operator==(Complex &ob)
        {
            if(this->imaginary == ob.imaginary && this->real == ob.real)
            {
                cout<<"equal"<<endl;
            }
            else
            {
                cout<<"not equal"<<endl;
            }
        }
};
int main()
{
    Complex A1(3, 4);
    Complex A2(2, 3);
    A1 + A2;
    A1 - A2;
    A1 == A2;
}