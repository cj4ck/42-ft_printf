#💾/42/Core_Curriculum/Ft_printf
# ft_printf()
- «  [[42Core_Projects]]

# General concepts of the project
- ==This project is pretty straightforward, It's goal is to recode printf.== 
- I am very proud of this project because I made it in only one file.
###  Implementation the following conversions:
- `%c` Prints a single character.
-  `%s` Prints a string (as defined by the common C convention).
-  `%p` The void * pointer argument has to be printed in hexadecimal format.
-  `%d` Prints a decimal (base 10) number.
-  `%i `Prints an integer in base 10.
-  `%u` Prints an unsigned decimal (base 10) number.
-  `%x` Prints a number in hexadecimal (base 16) lowercase format.
-  `%X` Prints a number in hexadecimal (base 16) uppercase format.
-  `%%` Prints a percent sign.

## Let's first talk abot variadic functions in C
> Variadic functions are functions that can accept an indefinite number of arguments. In other words, they can take any number of arguments that are passed to them during the function call.
```c
#include <stdarg.h>

void print_ints(int count, ...)
{
	int i = 0;
	int total = 0;

	va_list args;
	va_start(args, count);

	while ( i < count)
		{
		total += va_arg(args, int);
		printf("%d: %d\n",i ,value);
		i++;
		}
	va_end(args);
	return total;
}

int main()
{
print_ints(3, 24, 26, 311);
print_ints(2,256,51);
}
```
> In this example, the `print_ints` function takes a variable number of arguments, where the first argument `count` specifies how many integers will be passed. The function uses the `stdarg.h` library to handle the variable argument list, which is accessed using the `va_list`, `va_start`, `va_arg`, and `va_end` macros.
> Variadic functions can be very useful when you need to write a function that can accept a varying number of arguments, such as a formatting function that prints out a string with dynamically determined values, or a function that needs to perform a calculation on a variable number of values.

## `va_list`
> This macro defines a type that is used to declare a variable argument list. For example, `va_list my_args;` declares a variable `my_args` that can hold an argument list.

## `va_start`
> This macro initializes the argument list. It takes two arguments: the first is the `va_list` object, and the second is the last known named argument before the ellipsis. For example, `va_start(my_args, count)` initializes the argument list `my_args` and sets the starting point for `va_arg` to the argument after `count`.

## `va_arg`
> This macro retrieves the next argument from the argument list. It takes two arguments: the first is the `va_list` object, and the second is the type of the argument being retrieved. For example, `va_arg(my_args, int)` retrieves the next argument in `my_args` as an `int`.
    
## `va_end`
> This macro cleans up the argument list after it has been used. It takes one argument, which is the `va_list` object being cleaned up. For example, `va_end(my_args)` cleans up the `my_args` argument list.
