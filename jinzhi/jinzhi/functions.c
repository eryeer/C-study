#include <stdlib.h>
#include <stdio.h>

int main011 (void)
{
	char ch[100];
	gets(ch); //不安全的输入
	puts(ch);
	// printf("%s\n", ch);
	return EXIT_SUCCESS;
}

int main012()
{
	char arr[100];
	fgets(arr,100,stdin); // 如果输入的大小小于原始指针对应区域的大小，会在字符串输入完成时自动加上\n\0； 如果输入的大小大于等于原始指针对应的区域的大小，会自动加上\0，不会加上\n；安全的输入，会接受固定大小的字符串
	puts(arr);
	return EXIT_SUCCESS;
}

int main013()
{
	char arr1[100];
	char arr2[100];
	int a, b, c;
	//1、接受换行结束，可以接受空格
	//scanf("%[^\n]",arr);
	//2、在scanf获取数据时建议不要添加任何字符，空格除外
	//scanf("%d %d %d", &a, &b, &c);
	//3、有限定字符宽度的格式化
	//scanf("%4d%4d%4d", &a, &b, &c);
	//scanf("%1s%2s", arr1, arr2);
	//4\屏蔽数据类型 %*d 屏蔽数组 %*c屏蔽字符
	scanf("%*d%s", arr1);
	//printf("%d	%d	%d", a, b, c);
	printf("%s\n", arr1);
	//printf("%s\n", arr2);
	printf("%05d\n", 12);
	return EXIT_SUCCESS;
}

int main014()
{
	char src[] = "dda123abcd";
	char *p = strchr(src,'a');
	printf("p=%s\n",p);
	return EXIT_SUCCESS;
}