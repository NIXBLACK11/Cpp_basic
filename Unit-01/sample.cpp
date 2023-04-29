#include<iostream>
using namespace std;
int main()
{
    int arr[9];
    cout<<"enter the array:";
    for(int i=0;i<9;i++)
    {
        cin>>arr[i];
    }
    int x=0;
    cout<<"enter the number:";
    cin>>x;
    for(int i=0;i<9;i++)
    {
        for(int j=i;j<9;j++)
        {
            if((i!=j)&&((arr[i]+arr[j])==x))
            {
                cout<<arr[i]<<","<<arr[j]<<endl;
            }
        }
    }
    //pehle max 
    int max=0;
    for(int i=0;i<9;i++)
    {
        if(arr[i]>max)
        {
        max=arr[i];
        }
    }
    int arr2[max]={0};
    for(int i=0;i<max;i++)
    {
        if(arr[i]==i+1)
        {
            arr2[i]=1;
        }
    }
    for(int i=0;i<max;i++)
    {
        cout<<arr2[i];
    }
    cout<<"\n$$$$$$$"<<endl;
    for(int i=0;i<(x/2);i++)
    {
        if((arr2[i]==1)&&(arr2[(x/2)-i]==1))
        {
            cout<<i<<","<<(x/2)-i<<endl;
        }
    }
    //counter array
}