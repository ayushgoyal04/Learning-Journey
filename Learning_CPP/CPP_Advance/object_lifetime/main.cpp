#include<iostream>

class Entity
{
public:
    Entity()
    {
        std::cout<<"Created entity"<<std::endl;
    }
    ~Entity()
    {
        std::cout<<"Destroyed entity"<<std::endl;
    }
};

int* CreateArray()
{
    // this is just blatent wrong code, the array we are creating is on the stack and will be destroyed as soon as the function is over
    // we are trying to return a pointer to the stack memory
    // int array[50];
    // return array;

    int* array = new int[50];
    return array;
}

class ScopedPtr
{
private:
    Entity* m_Ptr;

public:
    ScopedPtr(Entity* ptr)
        : m_Ptr(ptr)
    {}

    ~ScopedPtr()
    {
        delete m_Ptr;
    }
};


int main()
{

    {
        // empty scope
        Entity e; // entity is on stack (not heap)
        Entity* e2 = new Entity();


        // lets say we want to delete the heap allocated memory as well for that we can use a smart pointer/ scoped ptr

        ScopedPtr e3 = new Entity();
        // the scopedptr gets allocated on the stack and it gets deleted when we go out of scope hence the entity will also be deleted
        // scoped pointer is just a wrapper on the class (a class wrapper)
    }

    // stack var gets destroyed when we go out of scope

    std::cout<< "OUt of scope()"<<std::endl;
}
