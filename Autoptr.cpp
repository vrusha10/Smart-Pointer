
#include <iostream>
#include<memory>
using namespace std;
class A 
{
    public:
    void show()
    {
        cout<<"Display Show"<<endl;
    }
};
int main()
{
    auto_ptr<A>p1(new A);
    p1->show();
    cout<<p1.get()<<endl;// p1 get ownership
    
    auto_ptr<A>p2(p1);
    p2->show();
    cout<<p1.get()<<endl;// p1 is null
    cout<<p2.get()<<endl;// p2 get ownership
}
