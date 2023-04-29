#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a;
    for (int i = 0; i < 5; i++)
    {
        a.push_back(i*2);
    }
    cout<<"\n**********************\n";
    for (auto itr = a.begin(); itr!=a.end(); itr++)
    {
        cout<<*itr<<",";
    }
    cout<<"\n**********************\n";
    for (auto it = a.rbegin(); it!=a.rend(); it++)
    {
        cout<<*it<<",";
    }
    cout<<"\nsize:"<<a.size();
    cout<<"\ncapacity:"<<a.capacity();
    cout<<"\nmax size:"<<a.max_size();
    a.resize(4);
    a.size();
    if(a.empty()==true)
    {
        cout<<"\nEmpty";
    }
    else
    {
        cout<<"\nNot empty";
    }    
    cout<<"\n**********************\n";
    for (auto itr1 = a.begin(); itr1 != a.end(); itr1++)
    {
        cout<<*itr1<<",";
    }
}