#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> a, b;
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        a.push_back(i*2);
        b.push_front(i*3);
    }
    cout<<"\na list : ";
    list<int>::iterator j = a.begin();
    while(j!=a.end())
    {
        cout<<*j<<",";
        j++;
    }
    cout<<"\nb list : ";
    for(auto k = b.begin();k != b.end();k++)
    {
        cout<<*k<<",";
    }
    cout<<"\nSize of a is:"<<a.size();
    a.sort();
    cout<<"\nSorted a is : ";
    for(auto k = a.begin();k != a.end();k++)
    {
        cout<<*k<<",";
    }
    a.reverse();
    cout<<"\nReversed a is : ";
    for(auto k = a.begin();k != a.end();k++)
    {
        cout<<*k<<",";
    }
}