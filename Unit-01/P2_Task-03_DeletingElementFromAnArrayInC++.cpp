#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    cout<<"original array:"<<endl;
    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<""<<endl;
    cout<<"Enter the number:"<<endl;
    int s;
    cin>>s;
    int c=0;
    for(int i=0;i<8;i++)
    {
        if(arr[i]==s || c==1)
        {
            if(i<7)
            {
                arr[i]=arr[i+1];
                c=1;
            }
            else
            {
                arr[i]=0;
            }
        }
    }
    cout<<"changed array:"<<endl;
    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<""<<endl;
    int arr1[]={1,2,3,4,5,6,7,8};
    int arr2[7];
    cout<<"original array:"<<endl;
    for(int i=0;i<8;i++)
    {
        cout<<arr1[i]<<",";
    }
    cout<<""<<endl;
    cout<<"Enter the number:"<<endl;
    s;
    cin>>s;
    c=0;
    for(int i=0;i<8;i++)
    {
        if(arr1[i]==s || c==1)
        {
            c=1;
            arr2[i]=arr1[i+1];
        }
        else
        {
            arr2[i]=arr1[i];
        }
    }
    cout<<"changed array:"<<endl;
    for(int i=0;i<7;i++)
    {
        cout<<arr2[i]<<",";
    }
    cout<<""<<endl;
}