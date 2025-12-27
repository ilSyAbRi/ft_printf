# ***ft_printf***

A reimplementation of printf() in C, built as a static library.

---

```c
int ft_printf(const char *, ...);
```

---

###### Handles:   `c s p d i u x X %`

###### Rules:   `no buffer management, no libc printf`

###### Allowed:   `write, malloc, free, va_start/arg/copy/end`

###### Build:   `ar → libftprintf.a`

###### Files:   `Makefile, ft_printf.h, *.c`


***Goal: master variadic functions and formatted output.***

[Click here to open the PDF subject for more detail](./en_subject.pdf)

---

### Example Test (main.c)

```c
#include "ft_printf.h"

int main(void)
{
    int r = ft_printf("Hi %s %d%%\n", "42", 7);
    ft_printf("Return: %d\n", r);
    return 0;
}
```

### Expected Output
```
Hi 42 7%
Return: 8
```
### Build

```
make
```
### Creates:

```
libftprintf.a
```

### Compile & Run Test

```
cc -Wall -Wextra -Werror libftprintf.a main.c -o test
./test
```
