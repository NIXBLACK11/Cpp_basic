#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    fstream file;
    file.open("new.txt",ios::out);
    if(!file)
    {
        cout<<"error";
    }
    else
    {
        file<<"diwali jhhg diwali jhygh jhghg yfhfhy diwali\n";
    }
    file.close();
    file.open("new.txt",ios::in);
    int count = 0;
    if(!file)
    {
        cout<<"error";
    }
    else
    {
        char ch;
        string s;
        while(!file.eof())
        {
            file>>noskipws>>ch;
            if(ch==' ' || ch=='\n')
            {
                if(s=="diwali")
                {
                    count ++;
                }
                s="";
            }
            else
            {
                s=s+ch;
            }
        }
    }
    file.close();
    cout<<count;
}