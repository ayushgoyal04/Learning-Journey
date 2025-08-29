/*
allow us to override methods in subclasses

(a is parent of b)
if we create a mehtod in class a and mark it virtual we can override that method in b class to do somethign else
*/

#include <iostream>
#include<string>

class Entity
{
public:
    virtual std::string GetName() {return "Entity";}
};

class Player : public Entity
{
private:
    std::string m_name;
public:
    // Player(const std::string& name) : m_name(name) {}
    Player(const std::string name)
    {
        m_name = name;
    }
    // adding the override keyword is not necessary but should be done anyways because it makes the code more redable and helps us avoid spellign name... if the name of the function is now changed then we will get a error as a fn marked with override must have a declared virtual function in the parent calss
    std::string GetName() override { return m_name; }

};

int main()
{
    Entity* e = new Entity();
    std::cout<< e->GetName() << std::endl;

    Player* p = new Player("Ayush");
    std::cout<<p->GetName() <<std::endl;

    // <example delta>
    // here we are making entity as a pointer to the p class, so ideally we want getname to get us "Ayush" but we get "Entity" in the output-. THis is resolved by virtual function
    // this can be resolved by just marking the parent classs GetName function virtual
    Entity* entity = p;
    std::cout<< entity->GetName() <<std::endl;

}

/*
virtual function comes in with dynamic dispatch- cimpler implements this via a v-table.
A v-table is a mapping of the virtual function to the base class so what we can point them to the correct declaation of the function instead of just calling the function in the class type (as shown in the example delta above)
*/

/*
Virtual function are not free, there are 2 runtime costs involved->
1. addition memory to store the v table so that we can dispatch to the correct function that inlcdes a member pointer inthe actual base classs to points to the v table
2. every time we call the virtual function we hav ot go throught that table to determine which fn to actually map to .. which is an additional performance penalty. 
*/
