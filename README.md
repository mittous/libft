
# -------/-- Libft --/-------
# Your very first own library

This project is about coding a 'C' library.
It will contain a lot of general purpose functions your programs will rely upon.

## Deployment

To deploy this project run :

```bash
    make */ or /* make re
```
to delete .o files run :
```bash
    make clean */ or /* make fclean
```


## Documentation
take a look to makefile :


[Documentation]( https://www.gnu.org/software/make/manual/make.html#toc-Overview-of-make)

[Documentation]( https://www.math.colostate.edu/~yzhou/computer/writemakefile.html)

your friend in implementation process is "man".
## why this project
C programming can be very tedious when one doesn’t have access to the highly useful
standard functions. This project is about understanding the way these functions work,
implementing and learning to use them. Your will create your own library. It will be
helpful since you will use it in your next C school assignments.

## Libc functions

| function name | Description               |
| :--------  | :-------------------------   |
| `• isalpha` |  The **ft_isalpha()** function tests for any character for which isupper((arg >= 'A' && arg <= 'Z')) or islower((arg >= 'a' && arg <= 'z')) is true.The ft_isalpha() function returns zero if the character tests falseand returns non-zero if the character tests true.|
| `• isdigit` |  The **ft_isdigit()** function tests for a decimal digit character.this includes the following characters only :{'1', '2', '3', '4', '5', '6', '7', '8', '9'}|
| `• isalnum` |  The **isalnum()** function tests for any characterfor which ft_isalpha(check "ft_isalpha.c" file) or isdigit(check "ft_isdigit.c" file) is true.*The ft_isalnum() function returns zero if the character tests false and returns non-zero if the character tests true.|
| `• isascii` |  The **ft_isascii()** function tests for an ASCII character, which is any character between 0 and octal 0177 inclusive.The ft_isascii() function returns zero if the character tests falseand returns non-zero if the character tests true.|
| `• isprint` |  The **ft_isprint()** function tests for any printing character, including space (` ').In the ASCII character set, this includes character in the range of {c >= 32 && c < 127}|
| `• strlen`  |  The **ft_strlen()** function computes the length of the string s.The ft_strlen() function returns the number of characters that precede the terminating NULL ("\0 |

#### you can check the man page in your iterm to know more.
