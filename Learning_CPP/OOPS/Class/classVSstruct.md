classes are basically a type... we are essectially creatign a new variable type therefore a unique name

variables that are made from class types are called objects and a new object variable is called an instance

classes can contain functionality.. and function inside a class are called as methods

The difference between a class and a struct is basically none, just a small difference in visibility;

All the members of a class are private by default, which means that they are only accessible to the class itsellf and the methods defined insided the class. unless specified differently.

With the struct, the default is public. (unlike class). you will have to explicitely write private in order to make something private.

The only reason struct exists in cpp is for backwarws compatibility in c. C doies not have class but has structs.

when do we use struct and when to use class?

Ans. Although the difference is very trivial as mentioned above, programmers come up their own definitions of what a struct should be and what a class should be.
Structs are generally used only for simple tasks, no inheritance, no complexities like that. In other classes use class (more powerful)
, structs are a legacy feature from C which can group together variables into a user-defined type, BUT CANNOT contain functions (because C did not have OOP features such as methods).

This is why it's common in C++ to use structs for "classes with no methods", because that was how they were used in C.
