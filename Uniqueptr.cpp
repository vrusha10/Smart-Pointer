#include <iostream>
#include<memory>
using namespace std;
class Rectangle
{
    int len,bre;
public:
    Rectangle(int l,int b)
    {
        len=l;
        bre=b;
    }
    int area()
    {
        return len*bre;
    }
};

int main()
{
   unique_ptr<Rectangle>p1(new Rectangle(10,20));
   cout<<p1->area()<<endl;

   unique_ptr<Rectangle>p2;
   p2=move(p1);

   cout<<p2->area()<<endl;
}
