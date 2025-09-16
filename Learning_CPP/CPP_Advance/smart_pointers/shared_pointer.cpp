/*
Shared pointer use something called refrence counting

refrence counting-> we keep track of how many refrences we have of the pointer.. when the refrence count goes to 0 that is when the memeory is destoyed

Control block-> stored count
*/

#include <iostream>
#include <memory>

class Entity
{
    public:
    Entity()
    {
        std::cout<<"shared ptr created"<<std::endl;
    }

    ~Entity()
    {
        std::cout<<"shared ptr destroyed"<<std::endl;
    }

    void DoSomething() {}
};

int main()
{
    std::shared_ptr<Entity> entity = std::make_shared<Entity>();

    // entity->DoSomething();

    std::shared_ptr<Entity> sharedEntity = entity;
    // sharedEntity->DoSomething();

    // weak pointer
    // this does nto increase the ref count (can be sued to check if the other pointer are alive or not... but it wont keep it alive)
    std::weak_ptr<Entity> weaker = entity;
}
