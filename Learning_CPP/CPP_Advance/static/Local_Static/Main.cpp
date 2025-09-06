// Lifetime- Refers tohow long will the var remain in the memory before it is deleted

// scope - where in the program is that variable accessible

// Static local var - allows us to declare a var that has the lifetime of the entire program but the scope is inside that function / statement / {}

#include<iostream>

class Singleton
{
    // a singleton class is a class which should have only one instance in existance

public:
    static Singleton& Get()
    {
        static Singleton instance;
        return instance;
        // if we do not have the static keyword then this Singleton will be destroyed as soon as we hit the enging } of this fn.
    }

    void Hello() {}

};

void Function()
{
    static int i = 0; // this var will be declred again if the functuion is called multiple time, it will persist
    i++;
    std::cout<<i<<std::endl;
}

int main()
{
    Function();
    Function();
    Function();
    Function();
    Function();

    Singleton::Get().Hello();

}
