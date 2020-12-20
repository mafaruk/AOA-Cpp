<h1>Linker</h1>
after compilation, Linker comes into picture.</br>
Linker combines the multiple object files into one executable binary file.</br>
if there's only one file then Linker does nothing.</br>

consider scenario below</br>
you are using a function in main function whose definition is in the different file (but within same directory) although declaration is in the main function file
compiler will check declaration only and compiles the both files, and generates object file</br>
linker will combine both object file into one executable file which will result in successful execution.</br>

<b><i>Note :- however, in any text editor this is not possible. you can see this working in any IDE.</i></b></br>

to work in text editor,  you need to add #include preprocessor statement</br>

I am using atom text editor, so i choose the preprocessor statement</br>
