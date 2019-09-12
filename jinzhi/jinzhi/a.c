#include <stdio.h>
#include <stdlib.h>

int main01(void)
{
	int a = 10;
	printf("%d\n",a);

	int b = 010;
	printf("%d\n",b);

	int c = 0xa1;
	printf("%d\n",c);
}

int main02(void)
{
	int a = 10;

	float b = 3.15;

	char c = 'A';

	double d = 5.12;

	short e = 10;

	long f = 10;

	long long g = 10;

	int len1 = sizeof(a);
	int len2 = sizeof(b);
	int len3 = sizeof(c);
	int len4 = sizeof(d);
	int len5 = sizeof(e);
	int len6 = sizeof(f);
	int len7 = sizeof(g);

	printf("%d\n",len1);
	printf("%d\n",len2);
	printf("%d\n",len3);
	printf("%d\n",len4);
	printf("%d\n",len5);
	printf("%d\n",len6);
	printf("%d\n",len7);
	return 0;
}

int main03(void)
{
	goto Here;
	printf("aaaaaaa\n");
	Here:
	printf("bbbbbb\n");
	return 0;
}

int main04(void)
{
	int score[10] = {1,2,3};
	printf("%p\n",&score);
	printf("%p\n",&score[0]);
	printf("%p\n",&score[1]);
	printf("%p\n",&score[2]);
	return 0;
}

int main05(void)
{
	char arr[] = "12345";
	printf("%d\n", sizeof(arr));
	printf("%s\n",arr); // 以\0为结束标志
	char input[100];
	scanf("%[^\n]", input);
	printf("%s\n", input);


	return 0;
}