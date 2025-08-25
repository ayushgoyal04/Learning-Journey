#include<iostream>

class Entity
{
public:
    float x, y;

    Entity()
    {
        x = 0.0f, y = 0.0f;
        std::cout<<"Entity constructed"<<std::endl;
    }

    ~Entity()
    {
        std::cout<<"Entity destructed"<<std::endl;
    }

    void Print()
    {
        std::cout<<x<<", "<< y << std::endl;
    }

};

int main()
{

    Entity e;
    e.Print();
}
