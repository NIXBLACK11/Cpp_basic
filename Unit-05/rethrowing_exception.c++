#include<iostream>
using namespace std;

void compute(int a)
{
    try
    {
        if(a==0)
        {
            throw "error";
        }
    }
    catch(const char *s)
    {
        throw s;
    }
}

int main()
{
    int a=0;
    cin>>a;
    try
    {
        compute(a);
    }
    catch(const char *s)
    {
        cout<<s;
    }
}