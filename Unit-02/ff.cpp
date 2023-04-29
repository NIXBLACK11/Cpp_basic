#include<iostream>
using namespace std;
class test{
    public:
        int a;
        friend void operator++(test &);
};
void operator++(test &ob)
{
    ob.a=ob.a+1;
}
int main()
{
    test obj;
    obj.a=10;
    ++obj;
    cout<<obj.a;
}