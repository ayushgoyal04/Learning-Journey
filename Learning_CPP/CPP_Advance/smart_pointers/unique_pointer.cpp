/**
 * A unique pointer is a scoped pointer. when that pointer goes out of scome it will go out of scope and will call delete.
 * We cannot copy a unique pointer.
 */

#include <iostream>
#include <memory>

class Entity
{
public:
    Entity()
    {
        std::cout<<"Created Entity!" <<std::endl;
    }

    ~Entity()
    {
        std::cout<<"Destroyed Entity!"<< std::endl;
    }

    void Print() {}
};


int main()
{
    {
        // std::unique_ptr<Entity> entity(new Entity());
        // safer method to create unique pointer
        std::unique_ptr<Entity> entity = std::make_unique<Entity>();

        // std::unique_ptr<Entity> e0 = entity; // cannot do this (no copying)
        entity->Print();

    }
    // entity->Print(); // out of scope
}
