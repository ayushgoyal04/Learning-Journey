/*
how accessible certain members / methodsds of a classs are.
has no affect on the program performce or hoe to program runs

just there to make writing code easier and cleaner (help programmers)
*/

/*
private, protected, public
*/

/*
private-> only that class can access that variables (read/ right) (although there is a friend keword where we can label a class or a function as friend and that can access the private vriables)
*/
#include <iostream>
#include<string>

class Entity
{
    // by default they are private in a class- these are public by default in structs
// private:
//     int X, Y;
//     void Print() {}

// protected: // the subclasses can access these-> but not tht main
//     int X, Y;
    // void Print() {}

public: // everyone can access
    int X, Y;
    void Print() {}

public:
    Entity()
    {
        X = 0;
        Print();
    }

};

class Player : public Entity
{
public:
    Player()
    {
        X = 2;
        Print();
    }
};


int main()
{
    Entity e;
    // e.X; // cannot do that when X is marked private or protected
    std::cout<<e.X<<std::endl; // can be accessed when X is public
}

