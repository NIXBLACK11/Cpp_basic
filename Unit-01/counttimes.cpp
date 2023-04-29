#include<iostream>
using namespace std;
class test{
    public:
        static int a;
        test(){
            test::a++;
        }
};
int test::a=1;
int main()
{
    test obj[10];
    cout<<test::a<<endl;
}