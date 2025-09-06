#include<iostream>


class Entity
{
private:
    std::string m_Name;
    int m_Age;
public:
    explicit Entity(const std::string& name)
    : m_Name(name), m_Age(-1) {}

    explicit Entity(int age)
    : m_Name("Unknown"), m_Age(age) {}

};



int main()
{
    // explicit disables the implicit functionality
    // we put explicit in front of the constructor
    Entity a("Ayush");
    Entity b(21);

    // implicit conversion no longer allowed
    // Entity c = 'Name';
    // Entity d = 28;
}
