#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a;

	a = add(1, 2);
	printf("%d\n", a);
	return 0;
}

int add(int a, int b)
{
	return a + b;
}