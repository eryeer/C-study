#include <stdio.h>
#include <stdlib.h>  //����ϵͳ���߿�

#define PI 3.14159

int main(void)
{
	int a = 10;
	a = PI;
	printf("%d\n", a);
	return 0;
}

int main01(void)
{ 
	printf("hello world\n");
	int value = system("dir");  //ִ��ϵͳ����
	printf("����dir ����ֵΪ%d\n",value);
	return 0;
}

int main02(void)
{
	int a;
	int b;
	int c;
	//a = 10;
	//b = 20;
	//c = a + b;

	__asm
	{
		mov a, 3
		mov b, 4
		mov eax, a
		add eax, b
		mov c, eax
	}

	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);

	getchar(); 

	return 0;
}