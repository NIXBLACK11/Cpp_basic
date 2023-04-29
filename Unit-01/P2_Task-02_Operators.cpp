#include<iostream>
using namespace std;
int main()
{
    int a=10,b=12;
    cout<<"************"<<endl;
    //Arithematic operator
    cout<< a+b <<endl;//22
    cout<<a-b<<endl;//-2
    cout<<a*b<<endl;//120
    cout<<a/b<<endl;//0
    cout<<"************"<<endl;
    //Remainder operator
    cout << a%b <<endl;//10
    cout<<"************"<<endl;
    //Arithematic Assihnment Operator
    int c=10;
    c+=10;
    cout<<c<<endl; //20 
    cout<<"************"<<endl;
    //Increment and decrement operator
    a=5;
    cout<<a++<<endl;
    cout<<a<<endl;
    cout<<++a<<endl;
    cout<<a<<endl;
    cout<<a--<<endl;
    cout<<a<<endl;
    cout<<"************"<<endl;
    //Logical operators
    a=0;
    if(a<1&&b>3)
    {
        cout<<"lo"<<endl;
    }
    if(a<1&b>3)
    {
        cout<<"bi"<<endl;
    }
    cout<<"************"<<endl;
    //Ternary operator
    int n1=10,n2=12,max;
    max=(n1>n2)?n1:n2;
    cout<<max<<endl;
    cout<<"************"<<endl;
    //Relational operator
    if(n2>n1)
    {
        cout<<"this is relational operator:>"<<endl;
    }
    cout<<"************"<<endl;
}