# 0x04. C - More Functions, More Nested Loops

Each task is represented by a separate C file with a specific function to complete. The tasks cover topics such as character manipulation, multiplication, printing numbers, drawing shapes, and more.

## Tasks

1. **0-isupper.c**: Uppercase Character
   - Description: Write a function to check for an uppercase character.
   - Prototype: `int _isupper(int c)`
   - Usage: The function can be called to check if a character is uppercase.

2. **1-isdigit.c**: Digit Checker
   - Description: Write a function to check for a digit (0 through 9).
   - Prototype: `int _isdigit(int c)`
   - Usage: The function can be called to check if a character is a digit.

3. **2-mul.c**: Multiply Function 
   - Description: Write a function to multiply two integers.
   - Prototype: `int mul(int a, int b)`
   - Usage: The function can be called to multiply two integers.

4. **3-print_numbers.c**: Print Numbers 0 to 9
   - Description: Write a function to print the numbers from 0 to 9, followed by a new line. You can only use the `_putchar` function twice in your code.
   - Prototype: `void print_numbers(void)`
   - Usage: The function can be called to print the numbers.

5. **4-print_most_numbers.c**: Print Most Numbers 0 to 9 (Except 2 and 4)
   - Description: Write a function to print the numbers from 0 to 9, except 2 and 4, followed by a new line. You can only use the `_putchar` function twice in your code.
   - Prototype: `void print_most_numbers(void)`
   - Usage: The function can be called to print the numbers.

6. **5-more_numbers.c**: Print More Numbers 0 to 14 (Ten Times)
   - Description: Write a function to print the numbers from 0 to 14, ten times, followed by a new line. You can only use the `_putchar` function three times in your code.
   - Prototype: `void more_numbers(void)`
   - Usage: The function can be called to print the numbers.
```bash
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-print_line.c -o 6-lines
julien@ubuntu:~/0x04$ ./6-lines | cat -e
$
__$
__________$
$
julien@ubuntu:~/0x04$ 
```

7. **6-print_line.c**: Draw a Straight Line
   - Description: Write a function to draw a straight line in the terminal using the character `_`. The line should end with a new line (`\n`). If `n` is 0 or less, the function should only print a new line.
   - Prototype: `void print_line(int n)`
   - Usage: The function can be called to draw a line.
   
```bash
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_diagonal.c -o 7-diagonals
julien@ubuntu:~/0x04$ ./7-diagonals | cat -e
$
\$
 \$
\$
 \$
  \$
   \$
    \$
     \$
      \$
       \$
        \$
         \$
$
julien@ubuntu:~/0x04$ 
```

8. **7-print_diagonal.c**: Draw a Diagonal Line
   - Description: Write a function to draw a diagonal line in the terminal using the character `\`. The diagonal should end with a new line (`\n`). If `n` is 0 or less, the function should only print a new line.
   - Prototype: `void print_diagonal(int n)`
   - Usage: The function can be called to draw a diagonal line.
```bash
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-print_square.c -o 8-squares
julien@ubuntu:~/0x04$ ./8-squares 
##
##
##########
##########
##########
##########
##########
##########
##########
##########
##########
##########

julien@ubuntu:~/0x04$ 
```

9. **8-print_square.c**: Print a Square
   - Description: Write a function to print a square in the terminal using the character `#`. The square should be of size `size`. If `size` is 0 or less, the function should only print a new line.
   - Prototype: `void print_square(int size)`
   - Usage: The function can be called to print a square.
```bash
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-fizz_buzz.c -o 9-fizz_buzz
julien@ubuntu:~/0x04$ ./9-fizz_buzz 
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz Fizz 22 23 Fizz Buzz 26 Fizz 28 29 FizzBuzz 31 32 Fizz 34 Buzz Fizz 37 38 Fizz Buzz 41 Fizz 43 44 FizzBuzz 46 47 Fizz 49 Buzz Fizz 52 53 Fizz Buzz 56 Fizz 58 59 FizzBuzz 61 62 Fizz 64 Buzz Fizz 67 68 Fizz Buzz 71 Fizz 73 74 FizzBuzz 76 77 Fizz 79 Buzz Fizz 82 83 Fizz Buzz 86 Fizz 88 89 FizzBuzz 91 92 Fizz 94 Buzz Fizz 97 98 Fizz Buzz
julien@ubuntu:~/0x04$
```

10. **9-fizz_buzz.c**: Fizz-Buzz Test
    - Description: Write a program that prints the numbers from 1 to 100, followed by a new line. But for multiples of three, print "Fizz" instead of the number, and for multiples of five, print "Buzz". For numbers that are multiples of both three and five, print "FizzBuzz".
    - Usage: The program can be executed to print the Fizz-Buzz test.
```bash
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 10-main.c 10-print_triangle.c -o 10-triangles
julien@ubuntu:~/0x04$ ./10-triangles 
 #
##
         #
        ##
       ###
      ####
     #####
    ######
   #######
  ########
 #########
##########
#

julien@ubuntu:~/0x04$ ./10-triangles | tr ' ' . | cat -e
.#$
##$
.........#$
........##$
.......###$
......####$
.....#####$
....######$
...#######$
..########$
.#########$
##########$
#$
$
julien@ubuntu:~/0x04$
```

11. **10-print_triangle.c**: Print a Triangle
    - Description: Write a function to print a triangle in the terminal using the character `#`. The triangle should have a size of `size`. If `size` is 0 or less, the function should only print a new line.
    - Prototype: `void print_triangle(int size)`
    - Usage: The function can be called to print a triangle.

12. **100-prime_factor.c**: Largest Prime Factor
    - Description: Write a program that finds and prints the largest prime factor of the number 612852475143, followed by a new line.
    - Usage: The program can be executed to find and print the largest prime factor.

13. **101-print_number.c**: Print a long Integer
    - Description: Write a function to print an integer using the `_putchar` function. You are not allowed to use `long`, arrays, or pointers. You are also not allowed to hard-code special values.
    - Prototype: `void print_number(int n)`
    - Usage: The function can be called to print an integer.
