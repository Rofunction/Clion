#include <iostream>
#include <string>
using namespace std;
class animal
{
public:animal()
    {}
   virtual ~animal()=0;
public:virtual void speak()=0;
};
animal::~animal() {
    cout<<" "<<endl;
}
class cat:public animal
{
public:cat(string name)
    {
        m_name=new string (name);
    }
    virtual void speak()
    {
        cout<<*m_name<<"小猫在说话"<<endl;
    }
    ~cat()
    {
        if (m_name!=NULL)
        {
            cout<<"cat的析构"<<endl;
            delete m_name;
            m_name=NULL;
        }
    }
public: string *m_name;
};
void achieve (animal *animal)
{
    animal->speak(); delete animal;
}
//void achieve (animal & p)
//{
//    p.speak();
//}
int main()
{
//    cat c("Tom");
//    achieve(c);
    achieve(new cat("Tom"));
    return 0;
}