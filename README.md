_This project has been created as part of the 42 curriculum by msuizu_

**...Description...**
|	ft_printf is a project in c that aims to recreate the function printf from <stdio.h>, which is a variadic function that print
|	formatted output to the standard output.
|	it takes in arguments at least one string, that can contains specifiers with '%' to represents conversions.

**...Instructions...**
|	check with 'norminette', uncomment the main in ft_print.c then 'make' and compile with 
|	'cc -Wall -Werror -Wextra **libftprintf.a**' + 'ft_printf.c'

**...Resources...**
|	printf : https://www.geeksforgeeks.org/c/printf-in-c/
|	various article on stack overflow to especially understand the use of conversions

**...Technical choices...**
\#	ft_print.c : contains prototype of ft_printf() + filters for conversions
\#	put_conversion : conversions that do not imply numbers
\#	put_nbr : conversions that deal with numbers recursively
\#	ft_printf.h : header file
\#	Makefile

|	ft_printf browses the string caracter by caracter, print with 'write' if a letter is encountered excepts for '%' caracter, which
|	verifies if there's a valid conversion next to, if valide the arg is sent to either 'put_conversion.c' or 'put_nbr.c', if else
|	the arg is simply ignored.