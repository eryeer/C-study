#include <stdio.h>
#include <stdlib.h>  //����ϵͳ���߿�


int main(void)
{
	printf("hello world\n");
	int value = system("dir");  //ִ��ϵͳ����
	printf("����dir ����ֵΪ%d\n",value);
	return 0;
}