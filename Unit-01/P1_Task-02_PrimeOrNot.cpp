#include<iostream>
#include<cmath>
using namespace std;
void forAllNPrimeOrNot(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"not prime"<<endl;
            return;
        }
    }
    cout<<"prime"<<endl;
}
void forHalfNPrimeOrNot(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            cout<<"not prime"<<endl;
            return;
        }
    }
    cout<<"prime"<<endl;
}
void forSqrtNPrimeOrNot(int n)
{
    for(int i=2;i<=(sqrt(n));i++)
    {
        if(n%i==0)
        {
            cout<<"not prime"<<endl;
            return;
        }
    }
    cout<<"prime"<<endl;
}
int sqrt1(int n)
{
    for (int j = 1; j < n; j++)
    {
        if(j*j==n)
        {
            return j;
        }
    }
    return n-1;
}
void forSqrt1NPrimeOrNot(int n)
{
    int a=sqrt1(n);
    for(int i=2;i<=a;i++)
    {
        if(n%i==0)
        {
            cout<<"not prime"<<endl;
            return;
        }
    }
    cout<<"prime"<<endl;
}
int main()
{
    int n;
    cin>>n;

    forAllNPrimeOrNot(n);
    forHalfNPrimeOrNot(n);
    forSqrtNPrimeOrNot(n);
    forSqrt1NPrimeOrNot(n);
    return 0;
}