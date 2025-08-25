#include <iostream>

#define LOG(x) std::cout<<x<<std::endl;

// struct Player
// {

//     int x, y;
//     int speed;

//     void Move(int xa, int ya)
//     {
//         x += xa * speed;
//         y += ya * speed;
//     }

// };


class Player
{
public:
    int x, y;
    int speed;

    void Move(int xa, int ya)
    {
        x += xa * speed;
        y += ya * speed;
    }

};


int main()
{
    Player player;
    player.Move(1, -1);

}
