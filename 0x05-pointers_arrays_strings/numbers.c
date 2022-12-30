#include <stdio.h>

int main(void)
{
	int b = 50;

	printf("%d\n", b);
	printf("address of b: %p\n", &b);

	int *ptr_len = &b;

	printf("the value is: %p\n", ptr_len);
	printf("value stored: %d\n", *ptr_len);

	return (0);
}
