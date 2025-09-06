#include <iostream>
#include <string>
// 2 different uses.... one with const and the other use is with lambda

class Entity
{
private:
    std::string m_Name;
    mutable int Debugcount = 0;
public:
    const std::string& GetName() const
    {
        Debugcount++;
        return m_Name;
    }
};

int main()
{
    const Entity e;
    e.GetName();

    // mutable with lambda
    int x = 8;
    auto f = [=]() mutable
    {
        x++;
        std::cout<<"Hello"<<std::endl;
    };

    f();
    // x = 8 still

}
