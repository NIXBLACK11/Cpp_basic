#include<iostream>
//#include<iterator>
#include<map>
using namespace std;

int main()
{
    map<int, int>a;
    for(int i=0;i<10;i++)
    {
        a.insert(pair<int, int>(i,(i*10)));
    }
    cout<<"\n**********************\n";
    map<int, int> :: iterator itr;
    for(itr = a.begin(); itr != a.end(); itr++)
    {
        cout<<"\n"<<itr->first<<":"<<itr->second;
    }
    auto it = a.find(2);
    cout<<"\noooooooooooooooooo"<<it->first<<":"<<it->second;
    map<int, int> b(a.begin(), a.end());
    //remove valur with key num
    int num;
    num = b.erase(4);
    cout<<"\n"<<num<<"erased";
    for(itr = b.begin(); itr != b.end(); itr++)
    {
        cout<<"\n"<<itr->first<<":"<<itr->second;
    }
    cout<<"\nsize:"<<a.size();
    cout<<"\nmax size:"<<a.max_size();
    if(a.empty()==false)
    {
        cout<<"\nempty";
    }
    else
    {
        cout<<"\nnot empty";
    }
    a.clear();
    cout<<"\nsize:"<<a.size();
}