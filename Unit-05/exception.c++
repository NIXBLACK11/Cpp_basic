#include<iostream>
#include<string>
using namespace std;

int main()
{
    int a = 0;
    cin>>a;
    try
    {
        if(a==0)
        {
            throw "11";
        }
    }
    catch(const char* s)
    {
        cout<<s;
    }
}