#include<iostream>
using namespace std;

class test{
    private:
        int a;
        int b;
    public:
        test(int a,int b)
        {
            this->a=a;
            this->b=b;
        }
        test()
        {
            this->a=0;
            this->b=0;
        }
        friend test operator +(test,test);
        void display()
        {
            cout<<a<<","<<b;
        }
};
test operator +(test ob1,test ob2)
{
    test ob3(ob1.a+ob2.a,ob1.b+ob2.b);
    return ob3;
}
int main()
{
    test ptr1(9,8);
    ptr1.display();
    test ptr2(1,5);
    ptr2.display();
    test ptr3;
    ptr3 = ptr1+ptr2;
    ptr3.display();
}