#include<iostream>
using namespace std;
class p
{
    public:
        int a;
        p()
        {
            a=69;
        }
       void val(int u)
       {
            int i=u;
       } 
};
int main()
{
    p ob;
    ob.val(96);
    cout<<ob.a<<ob.i;
}