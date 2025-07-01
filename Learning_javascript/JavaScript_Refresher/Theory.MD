Antipatterns-> The bad part of a language. The language with themost number of antipatters si javascript. Thesea re the things/ syntax that are allowen in the language but we must not use those.

Javascript is a Interpreted language

Javascripts has a shared architecture-> Identifier conflicts must be avoided
Methods to solve identifier conflicts->
1. Traditional method-> namespace design pattern
2.


Javascript is a protoype language-> all the common methods are never in the contructor, the are always in the prototype
prototype design pattern goes alogn with another design pattern called constructor stealing


Objects allocated  on heap will dynamically grow but things on stack will not change hence primitive datatype are stored in stack and non primitive data type is stored in heap in js

Every program is executed in 2 contexts, 1- user context and 2 - system context

Usually the objects allocated on the heap will become garbage if they do nto have a reference on the stack.
