#include<iostream>
#include<string>

class Entity
{
private:
    std::string m_Name;
    int m_Age;
public:
    Entity(const std::string& name)
    : m_Name(name), m_Age(-1) {}

    Entity(int age)
    : m_Name("Unknown"), m_Age(age) {}

};

void PrintEntity(const Entity& entity)
{
    // come task
}

int main()
{
    // compiler is allowed to perform 1 implicit conversion on tyour code

    Entity a("Ayush");
    Entity b(21);
    // implicit conversion
    Entity c = 'Name';
    Entity d = 28;
    // int is being converted into entity type (1 conversion )

    PrintEntity(65); // this is allowed
    // PrintEntity("ayush"); // this will nto work because c++ will have to do 2 conversions .. const char -> string-> entity
    PrintEntity(std::string("Ayush")); // this works because we are doing 1 converison... cpp can do the other
    PrintEntity(Entity("Ayush")); // now the compiler converts the const char to string 
}
