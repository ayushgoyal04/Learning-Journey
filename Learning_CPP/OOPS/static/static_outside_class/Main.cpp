#include<iostream>

// int s_Variable = 10; // global variable

// thsi will work as long as the static_outside_class_scope.cpp has the s_Variable declared with the static keyword.. because it is acssible tpo only the trnslation unit of that file.

extern int s_Variable; // EXTERNAL LINKING.. s_Variable is seached outside of its translation unit. NOTE - thsi will nto be able to find the static keyword s_Variable and will give en error when static is used

// this works same with a function as well 

int main()
{
    std::cout<<s_Variable<<std::endl;
}
