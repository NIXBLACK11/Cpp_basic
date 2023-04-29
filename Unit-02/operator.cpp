#include<iostream>
#include<string>
using namespace std;

string operator+(string a,int b)
{
    string temp=to_string(b);
    return(a + temp);
}
int main(){
    string a="hello";
    int b=123;
    string c=a+b;
    cout<<c<<endl;
}