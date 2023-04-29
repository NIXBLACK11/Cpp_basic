#include<iostream>
using namespace std;

class ABC{
    
    public:
    static int a;
        ABC(){
            a++;
        }
        
};

int ABC::a=0;

int main()
{
    ABC ob1;
    ABC ob2;
    
    cout<<ABC::a<<endl;
}