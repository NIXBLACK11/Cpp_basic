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
        friend void display(test *);
};
void display(test *ptr)
{
    cout<<ptr->a;
    cout<<ptr->b;
}
int main()
{
    test *ptr = new test(1,2);
    display(ptr);
}