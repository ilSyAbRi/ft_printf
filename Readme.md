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

### Project Structure

```
ft_printf/
├── Makefile                 # Build static library libftprintf.a
├── LICENSE                  # MIT License
├── Readme.md                # Project info & usage
├── en.subject.pdf           # PDF of project subject

├── ft_printf.h              # Prototypes for all functions
├── ft_printf.c              # Main dispatcher; parses format string & calls handlers

├── Format Handlers          # Each handles a specific specifier
│   ├── ft_do_base_10.c      # %d,%i,%u → ft_putnbr, ft_count_signed_base, ft_count_unsigned_base
│   ├── ft_do_hex.c          # %x,%X → ft_print_hex, ft_count_unsigned_base
│   ├── ft_do_address.c      # %p → ft_print_hex, ft_count_unsigned_base, ft_putstr
│   ├── ft_do_str_char.c     # %s,%c → ft_putstr, ft_putchar, ft_strlen
│   └── ft_do_modulo.c       # %% → ft_putchar

├── Helpers                  # Utility functions used by handlers
│   ├── ft_putchar.c         # Print char
│   ├── ft_putstr.c          # Print string
│   ├── ft_putnbr.c          # Print signed number
│   ├── ft_print_hex.c       # Print hex number (lower/upper)
│   ├── ft_strlen.c          # String length
│   ├── ft_count_signed_base.c   # Count digits of signed number
│   └── ft_count_unsigned_base.c # Count digits of unsigned number

```

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
