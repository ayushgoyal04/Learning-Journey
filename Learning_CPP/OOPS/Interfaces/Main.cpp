/*
interfaces are pure virtual function. These are a specific type of virtual fn.(an abstract method. interfacse in java/ c#)

An interface in the base class does nto have an implementation and forces sub classes to implement that function

We cannot instantiate an inteface class
*/
#include <iostream>
#include<string>

class Entity
{
public:
    virtual std::string GetName() = 0;
};

class Player : public Entity
{
private:
    std::string m_name;
public:
    Player(const std::string name)
    {
        m_name = name;
    }

    std::string GetName() override { return m_name; } // this is nto compuslory to be implemented

};

int main()
{
    // Entity* e = new Entity(); thsi will give an errir
    // std::cout<< e->GetName() << std::endl;

    Player* p = new Player("Ayush");
    std::cout<<p->GetName() <<std::endl;

    Entity* entity = p;
    std::cout<< entity->GetName() <<std::endl;

}
