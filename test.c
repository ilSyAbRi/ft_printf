#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int main()
{
	va_list args;
	printf("%d\n",sizeof(args));
}
