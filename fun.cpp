#include <iostream>
#include <string>
using namespace std;
class base
{
public: virtual int func()=0;
};
class son :public base
{public: int func()
    {
        return m_a+m_b;
    }
public:int m_a,m_b;
};
// 使用多态函数
int achieve(base & base)
{
    return base.func();
}
int main(){
    son s;
    s.m_a=10;s.m_b=20;
    int x= achieve(s);
    cout<<x<<endl;
    return 0;
}
