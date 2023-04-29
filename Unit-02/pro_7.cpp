#include<iostream>
using namespace std;
class time{
    public:
        int a;
        time(int a)
        {
            this->a = a;
        }
        int operator++(int)
        {
            return (this->a + 1);
        }
};
int main()
{
    time A(5);
    int inc = A++;
    cout<<inc<<endl;
}