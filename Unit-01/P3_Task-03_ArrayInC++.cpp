#include<iostream>
using namespace std;
void mul()
{
    int row,col;
    cout<<"enter the size"<<endl;
    cout<<"Row:"<<endl;
    cin>>row;
    cout<<"Column:"<<endl;
    cin>>col;
    int arr[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    int row2,col2;
    cout<<"enter the size"<<endl;
    cout<<"Row:"<<endl;
    cin>>row2;
    cout<<"Column:"<<endl;
    cin>>col2;
    int arr1[row2][col2];
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            cin>>arr1[i][j];
        }
    }
    if(col!=row2)
    {
        cout<<"not possible"<<endl;
    }
    int arr2[col][row2];
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row2;j++)
        {
            int sum=0;
            for(int k=0;k<col2;k++)
            {
                sum=sum+arr[i][k]*arr1[k][j];
            }
            arr2[i][j]=sum;
        }
    }
    cout<<"********"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<""<<endl;
    }
    cout<<"********"<<endl;
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            cout<<arr1[i][j]<<"  ";
        }
        cout<<""<<endl;
    }
    cout<<"********"<<endl;
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row2;j++)
        {
            cout<<arr2[i][j]<<"  ";
        }
        cout<<""<<endl;
    }
}
int main()
{
    mul();
}
