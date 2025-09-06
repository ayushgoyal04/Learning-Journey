// way for us to initialise out class member functions in the constructor
#include<iostream>

class Entity
{
private:
    std::string m_Name;
    int m_Score;

public:
    // without member initiaise list
    // Entity()
    // {
    //     m_Name = "Unknown";
    // }

    // with member initializer list
    Entity()
        : m_Name("Unknown"), m_Score(0)
    {
    }

    Entity(const std::string& name)
        : m_Name(name)
    {
    }

    const std::string& GetName() const { return m_Name; }
};


int main()
{

    Entity e0;
    std::cout<< e0.GetName() << std::endl;

    Entity e1("AYUSH");
    std::cout<< e1.GetName() << std::endl;
}

// why do we use this->
    /*
    1. keeps code clean.. if the class members become too large then the constrictor will becoem very crowded and clumsy
    2. performnce... initializing inside the constructor makes a copy and inmmidiatly throws it away
    */

// we should absolutely use this everywhere
