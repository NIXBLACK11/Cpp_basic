#include<iostream>
using namespace std;

class Result{
    public:
        int result;
        Result()
        {
            this->result = 0;
        }
        Result(int result)
        {
            this->result = result;
        }
        void display()
        {
            cout<<"\n"<<this->result;
        }
};

class A{
    public:
        int a;
        A(int a)
        {
            this->a = a;
        }
        Result friend operator+(A, A);
};

Result operator+(A ob1, A ob2)
{
    int ans = ob1.a + ob2.a;
    Result res(ans);
    return res;
}

class B{
    public:
        int a;
        B(int a)
        {
            this->a = a;
        }
        Result operator+(B ob)
        {
            int ans = this->a + ob.a;
            Result res(ans);
            return res;
        }
};

int main()
{
    Result res1;
    Result res2;
    A a1(10);
    A a2(20);
    B b1(30);
    B b2(40);
    res1 = a1+a2;
    res2 = b1+b2;
    res1.display();
    res2.display();
}