Hwo does cpp works?
main function is a soecial function that even tho has a return type int it si not necessary to return an int.

Header files like iostread do not get compiled seperately, theya re included on top your file, this literally means that they are placed on top fo your code during the preprocessing step.

every cpp file will be compiled intot he object file .o or .obj....

Linker- combines all the obj files and glues them into a single executable ie and exe file.

-- g++ -E test.cpp -o test.i && g++ -S test.cpp -o test.s && g++ -c test.cpp -o test.o && g++ test.o -o test

The errorlist we get in a cpp program si usually garbage-> it basically paused our outout window lookign for the word error. The better info is in the output window.

we get 1 obj file for every cpp file in the project


Declaration- statements that informs the compiler that a function exists

Definition- The actual body of the function (the main code)

we have to compile botht the main and the log files together in order for the declaration to work, the linker combines both the objs into 1 .exe

-- g++ main.cpp Log.cpp -o main
-- ./main

the job of linker is to resolve symbols otherwise we get a linker error


How does the cpp compiler work?
cpp text file -> obj file (intermediate file) -> exe
compiler does process like tokanization etx.
An abstract syntax tree is created which is a representation of our code.
The end goal pf compiler is to convert our code into either constant data or instructions.
Syntax tree-> machine code.

each app files are called translational units. Files does not exist in cpp unllike java (where the class name is supposed to be the file name)
out task is just to inform the compiler about the type of file we are feeding it, is it .c (c file) .cpp(cpp file) .h(header file) thats all. Files have NO meaning.

cpp files(translational units)
 -> object files

  -- g++ -c Math.cpp -o Math.o
we can create obj filed withotu any header or the main function.

the #include does nothing but copy paste the code of the header file included on top of the preexistign code.
-- Proof- created the endBranc.h header file and inlcuded that in the Math,cpp file.

How the C++ Linker Works?
Once the files are compiled then linking starts. The mainfocus is to find where each symbol and function is link them together. A way to link seperate programs into one executable.

explle usage of linker-> in the multiply we also want the logging, so insead of haveing the multiple\y and the log in the same file, we create 2 separate file, then them comlile and link them together.
NOTE_ the errors in cpp also tell us in that start is the error occuring, ex. when the error si int he compile stage then the error code stars with C, where int he Linker/ link stage it starts with LNK.

-- g++ Math.cpp Log.cpp -o Math

Linking error- unresolved external symbol or undefined reference
