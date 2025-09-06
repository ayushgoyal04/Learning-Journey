#include<iostream>

class Entity
{
private:
    int m_X, m_Y;
    mutable int var;

public:
// this only works in a class...{ const in front of a method }
// this is a promise that the method will not modify any data that it will get
    int GetX() const 
    {
        // m_X = 4; error
        var = 2; // var is mutable
        return m_X;
    }
    // sometims we can have to getters/ function.. one with const and on ewithout const

    // rule of thumb- always mark your mehtods const when they donto modify the contents... otherwise we will be stopp[ing prople form using it if they have const refrence of the class / method

    void SetX(int x)
    {
        m_X = x;
    }

};

void PrintClass(const Entity& e)
{
    // the object has type qualifiers that are not compatible with the member function "Entity::GetX"C/C++(1086)... cannot do thsi if GETX function is not marked const
    std::cout<<e.GetX()<<std::endl;
}


int main()
{

    Entity* e;

    // const is just a promise that the valur of the declared will not be changed ... but it can be broken

    const int MIN_AGE = 18;
    // MIN_AGE = 16; cannot do this

    // using const with pointers
    // int* a = new int; // creating the integer in the heap
    // *a = 2;
    // a = (int*)&MIN_AGE;
    // std::cout<<*a<<std::endl;


    // const int* a = new int;
    // // we cannot change the data at the pointer but we can change where it is pointting to
    // *a = 2;
    // a = (int*)&MIN_AGE;
    // std::cout<<*a<<std::endl;

    // the key here is the position of the const keyword with respect to the * ... so int const* is also fine
    // int* const a = new int;
    // // can change the contents of the pointer but we cannot assign the pointer to point at something else
    // *a = 2;
    // a = (int*)&MIN_AGE;
    // std::cout<<*a<<std::endl;


    // const int* const a = new int;
    // // cannot do both
    // *a = 2;
    // a = (int*)&MIN_AGE;
    // std::cout<<*a<<std::endl;

}
