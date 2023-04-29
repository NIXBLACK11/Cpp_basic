#include<iostream>
using namespace std;

class abc{
    public:
        int a;
        int b;

    abc(int a,int b)
    {
        this->a=a;
        (*this).b=b;
    }
};

int main()
{
    //abc obj(10,10);
    //abc *ptr=&obj;
    abc *ptr = new abc(10,10);
    cout<<ptr->a<<endl;
    cout<<(*ptr).b<<endl;
    return 0;
}