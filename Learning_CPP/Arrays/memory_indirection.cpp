#include <iostream>

class Entity
{
    public:
    // int example[5]; // memory is allocated in this case
    int* example = new int[5]; // we willhave to jump aroudn the memory ie from Entity pointer tot he array pointer (this is usually nto recommended and is not a good practice)

    Entity()
    {
        for(int i = 0; i < 5; i++)
        {
            example[i] = 2;
        }
    }

};

int main()
{
    Entity a;

}
