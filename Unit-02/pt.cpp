#include<iostream>
using namespace std;
class tit{
    int a;
    public:
        tit(int a)
        {
            this->a=a;
            cout<<"yoooo"<<a;
        }
        friend void s(tit *);
};
void s(tit *ob)
{
    cout<<"ui:"<<ob->a;
}
int main()
{
    tit *ptr = new tit(69);
    s(ptr);
}