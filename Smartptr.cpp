#include <iostream>
#include<memory>
using namespace std;
class Rect
{
    int *len;
public:
    explicit Rect(int *l=NULL)
    {
        len=l;
    }
    ~Rect()
    {
        delete(len);
    }
    int &operator *()
    {
        return  *len;
    }
};
int main()
{
    Rect len(new int());
    *len=20;
    cout<<*len<<endl;
}