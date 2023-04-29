#include<iostream>
using namespace std;

class Mammals{
    public:
        void mammalsPrint()
        {
            cout<<"I am a mammal"<<endl;
        }
};

class Marine{
    public:
        void marinePrint()
        {
            cout<<"I am a Marine Animal"<<endl;
        }
};

class BlueWhale:public Mammals,public Marine{
    public:
        void blueWhalePrint()
        {
            cout<<"I am a Blue Whale"<<endl;
        }
};

int main()
{
    Mammals mammals;
    mammals.mammalsPrint();

    Marine marine;
    marine.marinePrint();

    BlueWhale bluewhale;
    bluewhale.blueWhalePrint();

    bluewhale.blueWhalePrint();
    bluewhale.mammalsPrint();
    bluewhale.marinePrint();
}