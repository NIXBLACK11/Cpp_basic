#include<iostream>
#include<string>
using namespace std;
void basic()
{
    string a="Hello world ";
    string b="se";
    //concatenation
    cout<<a+b<<endl;
    //append
    string c=a.append(b);
    cout<<c<<endl;
    //length
    int len=c.length();
    cout<<len<<endl;
    //access    
    cout<<c[6]<<endl;
    //input
    for(int i=0;i<c.length();i++)
    {
        cout<<c[i]<<",";
    }
    getline(cin,a);
    cin>>b;
    cout<<a<<b<<endl;
    //For ascii value (int)char_variable
}
void printAsciiValue()
{
    string s="sidd";
    for(int i=0;i<s.length();i++)
    {
        cout<<(int)s[i]<<endl;
    }
}
void replaceCharacter()
{
    string a="Akash";
    for(int i=0;i<a.length();i++)
    {
        if((int)a[i]==65)
        {
            a[i]='B';
        }
        if(a[i]=='a')
        {
            a[i]='b';
        }
    }
    cout<<a<<endl;
}
void replaceCharacter2()
{
    string a="AkashZzYy****";
    for(int i=0;i<a.length();i++)
    {
        if(((int)a[i]>=65&&(int)a[i]<=90)||((int)a[i]>=97&&(int)a[i]<=122))
        {
            if(a[i]=='Z')
            {
                a[i]='A';
            }
            else if(a[i]=='z')
            {
                a[i]='a';
            }
            else
            {
                a[i]=(int)a[i]+1;
            }
        }
    }
    //cout<<"00"<<a[-1]<<"00";
    cout<<a;
}
void check()
{
    string a="dededf";
    int b=10;
    //string c=a+b;
    //no match for 'operator+'
    //cout<<c;
    //no match for 'operator+' (operand types are 'std::__cxx11::string' {aka 'std::__cxx11::basic_string<char>'} and 'int')
}
void PaliOrNot()
{
    //abbae
    string s;
    cin>>s;
    for(int i=0,j=s.length()-1;i<(s.length()/2);i++,j--)
    {
        if(s[i]!=s[j])
        {
            cout<<"not palindrome"<<endl;
            return;
        }
    }
    cout<<"palindrome"<<endl;
}
void co()
{
    string a;
    string b;
    cout<<"first:";
    cin>>a;
    cout<<"second:";
    cin>>b;
    int i=a.compare(b);
    //pehle lebgth fir ascii 
    //i>0 a>b
    //i<0 a<b
    cout<<i;
}
void mut()
{
    string a="hello";
    cout<<&a;
    a[0]='J';
    cout<<&a;
    cout<<a;
}
int main()
{
    //printAsciiValue();
    //replaceCharacter();
    //replaceCharacter2();
    //check();
    //PaliOrNot();
    //mut();
    //co();
    return 0;
}