#include<iostream>
using namespace std;

namespace first_space
{
    int x=10;
    void func()
    {
        cout<<"Inside first_space"<<endl;
    }
}
namespace second_space
{
    int x=12;
    void func()
    {
        cout<<"Inside second_space"<<endl;
    }
}
int main()
{
    first_space::func();
    cout<<first_space::x<<endl;

    second_space::func();
    cout<<second_space::x<<endl;

    return 0;
}