#include<iostream>

class Entity
{
public:
    float x, y;

    void Move(float xa, float ya)
    {
        x += xa;
        y += ya;
    }
};

class Player : public Entity
{
public:
    const char* name;

    void PrintName()
    {
        std::cout << name << std::endl;
    }
};

int main()
{
    std::cout<< sizeof(Entity)<<std::endl; // 8
    std::cout<< sizeof(Player)<<std::endl; // 16

    Player player;
    player.Move(5, 5);
    std::cout<<player.x<<std::endl;
    player.PrintName();

}
