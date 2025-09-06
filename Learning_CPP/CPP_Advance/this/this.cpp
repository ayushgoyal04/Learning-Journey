#include <iostream>
// only accesible to us using a member function (A  function that belongs to a class aka a method)

// this is a pointer to the current object instance that the method belongs to

void PrintEntity(Entity* e );
void PrintEntity2(const Entity& e );

class Entity
{
    private:

    public:
    int x, y;

    Entity(int x, int y)
    {
        x = x; // this does not work since we only are reassigning the parameter x
        // soln
        Entity* e = this; // type of this
        e->x = x;

        this->x = x; // (solves all the problem above)
        this->y = y;

        // we want to call the PrintEntity here
        PrintEntity(this); // this passes in the current instance automatically
        PrintEntity2(*this);

        delete this; // as this is just a pointer to this class

    }

    int GetX() const
    {
        const Entity* e = this; // this is also const here
        // e->x = 3; // does not work because this is a const method

        return x;
    }

};

void PrintEntity(Entity* e)
{
    // do somethig
}

int main()
{

}
