<h1>#C++ is faster than java and C#</h1>
mostly used in application which are directly related to hardware & in gaming engine
example of gaming engine unity, unreal, forstbyte etc.
in java and C# "virtual machine" convert the object file into machine understandable code at runtime (time taking)
think of virtual machine as a personal translator who books for you

C++ can directly run the machine code on target platform after executable file is created.
think of C++ as buying translated books instead of personal translator.

<h1>Flow of execution of C++ and C program</h1>
editor-> preprocessor (pre preprocessed code)-> compiler (object code .o file)-> linker/loader (add other library files)-> executable file (a.exe/ a.out)

<h2>preprocessor</h2>
preprocessor #include include(copy/ paste) whatever file is defined in the statement
preprocessor is responsible for removes all the comments from code before

<h2>Compiler</h2>
Compiler compiles the file and checks it or any possible syntactical errors .
Compiler generates object file as result.

<h2>Linker</h2>
after compilation, Linker comes into picture.
Linker combines the multiple object files into one executable binary file.
if there's only one file then Linker does nothing. 
