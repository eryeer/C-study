#include <stdio.h>
#include <stdlib.h>  //调用系统工具库


int main(void)
{
	printf("hello world\n");
	int value = system("dir");  //执行系统命令
	printf("调用dir 返回值为%d\n",value);
	return 0;
}