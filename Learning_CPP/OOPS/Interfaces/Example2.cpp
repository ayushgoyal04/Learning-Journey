#include <iostream>
#include<string>

// interfaces are just class in cpp there is no special keyword for that

class Printable
{
public:
    virtual std::string GetClassName() = 0;
};

class Entity : public Printable
{
public:
    virtual std::string GetName() {return "Entity" ;}

    std::string GetClassName() override {return "Entity" ;}
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

    std::string GetName() override { return m_name; }

    std::string GetClassName() override {return "Player" ;}

};

void Print(Printable* obj)
{
    std::cout << obj->GetClassName() <<std::endl;
}

int main()
{
    Entity* e = new Entity();
    // std::cout<< e->GetName() << std::endl;

    Player* p = new Player("Ayush");
    // std::cout<<p->GetName() <<std::endl;

    Entity* entity = p;
    // std::cout<< entity->GetName() <<std::endl;

    Print(e);
    Print(p);
}
