#include<iostream>
using namespace std;
class test{
    public:
        int a;
        test(int a)
        {
            this->a=a;
        }
        void print()
        {
            cout<<a;
        }
        friend void ex(test &);
};
void ex(test &ob)
{
    ob.a=10;
}
int main()
{
    test obj(15);
    obj.print();
    ex(obj);
    obj.print();
}