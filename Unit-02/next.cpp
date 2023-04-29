#include<iostream>
#include<string>
using namespace std;

class abc{
    private:
        int a;
    public:
        abc(){
            a=0;
        }
        friend void operator++(abc obj);
        //prefix
        friend void operator++(abc obj,int);
        //postfix
};
void operator++(abc obj){
    obj.a=obj.a+10;
    cout<<obj.a;
}

void operator++(abc obj,int){
    obj.a=obj.a+10;
    cout<<obj.a;
}

int main(){
    abc obj;
    obj++;
    ++obj;
    return 0;
}