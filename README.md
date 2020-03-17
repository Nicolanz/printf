# _printf()


### Description.

This repository contains the files which try to simulate the `printf()` function in C programming languagge. It is expected to be like the original one. This project is realized in order to resolve the **0x11. C - printf** challenge at [Holberton School.](https://www.holbertonschool.com "Holberton School.")


## Requirements.
### General.
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with `gcc 4.8.4` using the flags `-Wall` `-Werror` `-Wextra` and `-pedantic`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl").
- You are not allowed to use global variables
- No more than 5 functions per file
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called `holberton.h`
- All your header files should be include guarded
- Note that we will not provide the `_putchar` function for this project

### Allowed functions and macros.
- `write (man 2 write)`
- `malloc (man 3 malloc)`
- `free (man 3 free)`
- `va_start (man 3 va_start)`
- `va_end (man 3 va_end)`
- `va_copy (man 3 va_copy)`
- `va_arg (man 3 va_arg)`

### Compilation.
- Your code will be compiled this way: `$ gcc -Wall -Werror -Wextra -pedantic *.c`
- As a consequence, be careful not to push any c file containing a `main ` function in the root directory of your project (you could have a `test` folder containing all your tests files including `main` functions)
- Our main files will include your main header file (`holberton.h`): `#include` `holberton.h`
- We strongly encourage you to work all together on a set of tests
If the task does not specify what to do with an edge case, do the same as `printf`

## In adittion
- A man page is provided with the function. Run the script: `man man_3_printf` to get a full documentation of the function.
- A `main` file is not provided. Make sure to create your own to test the functions or to use it.
- Prototype:`int _printf(const char *format, ...);`
- In order to use the function just do it ad as the `printf()` function, just remeber to follow the correct syntax `_printf()`

------------



### Work integrants:

-  **Lizeth Franco**
- **Nicolás Zárate**
