// The main purpos is to allocate memory i nth emain memroty .. you write new and you write the datatype new <datatype>
// it finds the memory requred and returns a pointer to that memory address

// new- finds a contiguous block of memory and then returns the pointer toi that memory
#include<iostream>
#include <string>
using String = std::string;

class Entity
{
private:
    String m_Name;
public:
    Entity() : m_Name("Unknown") {}
    Entity(const String& s) : m_Name(s) {}

    const String& GetName() const { return m_Name; }
};


int main()
{
    int a = 2;
    int* my_array = new int[50]; // 50*4 = 200 bytes memeory
    int* b = new int;
    *b = 2;
    std::cout<<*b;

    Entity* e = new Entity();
    Entity* e = new Entity;
    Entity* e = new Entity("Ayush");
    Entity* e = new Entity[50]; // array of entities
    delete[] e;
    delete[] my_array;
    /// new initialised by [] should also be deleted by []
    delete b;

// with classes, new does 2 things- 1. Allocates memory in a row 2. It also calls the contructor

// new is just an operator like +, -... so it can be overloaded as well

/*
internal working of new
calling new will call an internal function clalled maclloc()
to allocate the memeory
*/

    Entity* e = new Entity();
    delete e;

    Entity* e2 = (Entity*)malloc(sizeof(Entity));
    new (e2) Entity();
    free(e2);

    // The above 2 lines of code are alomst similar except... new will call the contructor of Entity as well whereas malloc will just allocate the memory

    // when we use new.. we will HAVE to use delete
}
