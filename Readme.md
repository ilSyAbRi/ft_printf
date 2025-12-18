# **ft_printf**

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

---

***Goal: master variadic functions and formatted output.***
