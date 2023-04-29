#include<iostream>
#include<list>
#include<map>
#include<vector>
using namespace std;

int main()
{
    list<int> l;
    map<int, int> m;
    vector<int> v;
    for(int i=0;i<10;i++)
    {
        l.push_back(i*2);
        v.push_back(i*2);
        m.insert(pair<int, int>(i,i*3));
    }
    list<int> :: iterator i = l.begin();
    for
}