#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream new_file;
    new_file.open("first.txt",ios::out);
    if(!new_file)
    {
        cout<<"Error while file creation";
    }
    else
    {
        new_file<<"jsdh efdgf ergdrg\ngdfg dg dfg fdg";
    }
    new_file.close();
    int count = 0;
    new_file.open("first.txt",ios::in);
    if(!new_file)
    {
        cout<<"No such file!";
    }
    else
    {
        char ch;
        while(!new_file.eof())
        {
            new_file>>noskipws>>ch;
            if(ch==' ' || ch=='\n')
            {
                count++;
            }
        }
    }
    new_file.close();
    cout<<count;
}