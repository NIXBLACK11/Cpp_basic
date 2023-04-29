#include<iostream>
using namespace std;

class Super{
    public:
        Super(){
            cout<<"Super Constructor"<<endl;
        }
        void displaySuper(){
            cout<<"Method of super class"<<endl;
        }
};

class Base:public Super{
    public:
        Base(){
            cout<<"Base Constructor"<<endl;
            displaySuper();
        }
};

int main()
{
    Base base;
    base.displaySuper();
}