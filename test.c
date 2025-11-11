#include <unistd.h>
#include <stdio.h>

int main()
{
	int count = 2 + write(1,"hello",5);
	printf("%d\n",count);
}
