![](https://image.flaticon.com/icons/png/128/29/29302.png) ![](https://image.flaticon.com/icons/png/128/23/23930.png)![](https://image.flaticon.com/icons/png/128/107/107788.png) ![](https://image.flaticon.com/icons/png/128/65/65881.png)

# 0x11. C - printf

__This project is the simulation of the real function in the programming language "C/C++". Therefore the options described below will be detailed for a better understanding of this project:__
- %c -> This option prints characters
- %s -> This option prints a string of characters 
- d -> This option prints a signed integer in decimal base notation
- i -> This option prints a signed integer

## Requirements:

- General Allowed editors: vi, vim, emacs.
- All your files will be compiled on Ubuntu 14.04 LTS.
- Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic.
- All your files should end with a new line.
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl.
- You are not allowed to use global variables.
- No more than 5 functions per file.
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you dont have to push them to your repo (if you do we wont take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples.
- The prototypes of all your functions should be included in your header file called holberton.h.
- Dont forget to push your header file.
- All your header files should be include guarded.
- Note that we will not provide the _putchar function for this project.

### More Info:

#### Authorized functions and macros:

- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)
	
## Code Editor:

![](https://ventgrey.github.io/vent-blog/images/vim.png)


#### Main C code:


```C
# include  < limits.h >
# include  < stdio.h >
# incluye  " holberton.h "

/ * *
 * principal - Punto de entrada
 * *
 * Regreso: Siempre 0
 * /
int  main ( nulo )
{
	int len;
	int len2;
	unsigned  int ui;
	nulo * addr;

	len = _printf ( " Intentemos imprimir una oración simple. \ n " );
	len2 = printf ( " Intentemos imprimir una oración simple. \ n " );
	ui = ( unsigned  int ) INT_MAX + 1024 ;
	addr = ( nulo *) 0x7ffe637541f0 ;
	_printf ( " Longitud: [ % d , % i ] \ n " , len, len);
	printf ( " Longitud: [ % d , % i ] \ n " , len2, len2);
	_printf ( " Negativo: [ % d ] \ n " , - 762534 );
	printf ( " Negativo: [ % d ] \ n " , - 762534 );
	_printf ( "Sin signo : [ % u ] \ n " , ui);
	printf ( "Sin signo: [ % u ] \ n " , ui);
	_printf ( " octal sin signo : [ % o ] \ n " , ui);
	printf ( " octal sin signo: [ % o ] \ n " , ui);
	_printf ( " Hexadecimal sin signo : [ % x , % X ] \ n " , ui, ui);
	printf ( " Hexadecimal sin signo: [ % x , % X ] \ n " , ui, ui);
	_printf ( " Carácter: [ % c ] \ n " , ' H ' );
	printf ( " Carácter: [ % c ] \ n " , ' H ' );
	_printf ( " Cadena: [ % s ] \ n " , " ¡Soy una cadena! " );
	printf ( " Cadena: [ % s ] \ n " , " ¡Soy una cadena! " );
	_printf ( " Dirección: [ % p ] \ n " , addr);
	printf ( " Dirección: [ % p ] \ n " , addr);
	len = _printf ( " Porcentaje: [ %% ] \ n " );
	len2 = printf ( " Porcentaje: [ %% ] \ n " );
	_printf ( " Len: [ % d ] \ n " , len);
	printf ( " Len: [ % d ] \ n " , len2);
	_printf ( " Desconocido: [% r] \ n " );
	printf ( " Desconocido: [% r] \ n " );
	retorno ( 0 );
}
```
## How to compile
After using our compiler with the corresponding flags, we move on to use the "./a" executable as shown below.
```shell
gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c
```
```shell
$ ./a.out
```

## Screenshot
![Alt text](C:\Users\OMEN\Desktop\Nueva carpeta "Optional Title")
## AUTHOR:

- Juan Jose Gómez Rodríguez 
- Email: 1579@holbertonschool.com
- GitUser: @JuanJoseGomezR

## PARTNER:

- Jose Omar Espinosa Ramirez 
- Email: 1630@holbertonschool.com
- GitUser: @joer9514


