#include<iostream>
using namespace std;
class Circle
{
    public:
        int radius;
        Circle(int radius)
        {
            this->radius = radius;
        }
        bool operator<(Circle &ob)
        {
            float area1 = 2.14*this->radius*this->radius;
            float area2 = 2.14*ob.radius*ob.radius;
            if(area1<area2)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};
int main()
{
    Circle A1(5);
    Circle A2(4);
    if(A1<A2)
    {
        cout<<"A1 is smaller"<<endl;
    }
    else
    {
        cout<<"A1 is not smaller"<<endl;
    }
}