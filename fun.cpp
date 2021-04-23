#include <iostream>
#include <string>
using namespace std;
class base
{
public: virtual int func()=0;
};
class son :public base
{public:son(int a ,int b)
    {
        m_a=a; m_b=b;
    }
public: int func()
    {
        return m_a+m_b;
    }
public:int m_a,m_b;
};
int main(){
    son s(10,20);
    int x=s.func();
    cout<<x<<endl;
    return 0;
}
