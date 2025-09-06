#include<iostream>

struct Entity
{
    static int x, y;
    //note = if we keep the print mentod static and make the x and y variables non static then things will break because a static method does not have a class instance.
    // behid the scenes every non static method gets an instance of the clas as a parameter... but when we make the method non static then this is not the case, we no longer get the class instace as the hidden parameter


    static void Print()
    {
        std::cout<< x << ", "<<y << std::endl;
    }

};

// Define the static variables
int Entity::x;
int Entity::y;

int main()
{
    Entity e;
    e.x = 2; // this will not print as there si only one instance of the two variables across all instances of the Entity class.
    e.y = 9;

    // Entity e1 = {6, 7}; // this will faila fter making the variables static
    Entity e1;
    // e1.x = 6;
    // e1.y = 7;
    Entity::x = 5;
    Entity::y = 8;

    e.Print();
    Entity::Print();
    e1.Print();


}
