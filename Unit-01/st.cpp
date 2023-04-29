#include<iostream>
#include<string>
using namespace std;
void print(char *ptr)
{
    cout<<ptr[0];
}
int main()
{
    char s1[20]="kkkk";
    string s="hello";
    print(s1);
}