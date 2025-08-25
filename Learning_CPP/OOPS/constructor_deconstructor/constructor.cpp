#include<iostream>

class Entity
{
    // we ideally want to initialize the values before the method is called to some basic values
    public:
    float x, y;


    // a constructor is a special type of method whcih is called every time we call the object
    /**
     * rules
     * No return type
     * name must be same as the name of the class
     */

    // if we do nto define a constructor then we have a default contructor which does nothign ans is like this ->
    /*
    default constructor of every class
    Entity()
    {}
    */

    Entity()
    {
        x = 0.0f;
        y = 0.0f;
    }

    // parameterized constructor
    Entity(float xx, float yy)
    {
        x = xx;
        y = yy;
    }

    // we will have to call this init method every time Entity class inintiializd.. here coms the constructor
    // void Init()
    // {
    //     x = 0.0f;
    //     y = 0.0f;
    // }

    void Print()
    {
        std::cout<<x<<", "<< y << std::endl;
    }

};

int main()
{
    // tip - we can make the constructor of a class private, in that case that class cannot be initialized
    // className() = delete; -- this will delete teh default contructor

    Entity e;
    // e.Init();
    Entity e1(10.5, 23.4);
    // std::cout<<e.x<<std::endl;
    e1.Print();
}
