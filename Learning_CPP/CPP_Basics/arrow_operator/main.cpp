#include <iostream>
#include <string>

class Entity
{
public :
    void Print() const { std::cout<<"Jello!"<<std::endl; }

};

class ScopedPrt
{
private:
    Entity* m_Obj;
public:
    ScopedPrt(Entity* entity)
        : m_Obj(entity)
    {}

    ~ScopedPrt()
    {
        delete m_Obj;
    }

    Entity* operator->()
    {
        return m_Obj;
    }

    const Entity* operator->() const
    {
        return m_Obj;
    }
};

int main()
{
    Entity e;
    e.Print();

    Entity* e2 = &e;
    Entity& ent = *e2;

    ent.Print();
    // e2.Print();
    (*e2).Print();
    e2->Print();

    ScopedPrt entity = new Entity();
    entity->Print();

    const ScopedPrt entity = new Entity();
    entity->Print();
}
