#include<iostream>
#include<string>
using namespace std;

class abc{
    private:
        int squareSide;
        int rectSide1;
        int rectSide2;
        int area;
    
    public:
        abc(int squareSide){
            this->area=squareSide*squareSide;
            cout<<this->area<<endl;
        }
        abc(int rectSide1,int rectSide2){
            this->area=rectSide1*rectSide2;
            cout<<this->area<<endl;
        }
};
int main()
{
    abc obj1(5);
    abc obj2(4,6);
}