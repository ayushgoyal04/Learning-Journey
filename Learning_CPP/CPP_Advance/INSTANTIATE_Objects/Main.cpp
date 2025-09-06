#include<iostream>
#include<string>

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
    Entity* e;
    {
        Entity* entity2 = new Entity("Ayush"); // this is heap allocation
        e = entity2;

        // Entity entity -> GetName = Unknown
        Entity entity("Ayush"); // this is stack allocation
        std::cout << (*entity2).GetName() << std::endl;
    }

    delete e;
}
