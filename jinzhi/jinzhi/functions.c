#include <stdlib.h>
#include <stdio.h>

int main011 (void)
{
	char ch[100];
	gets(ch); //����ȫ������
	puts(ch);
	// printf("%s\n", ch);
	return EXIT_SUCCESS;
}

int main012()
{
	char arr[100];
	fgets(arr,100,stdin); // �������Ĵ�СС��ԭʼָ���Ӧ����Ĵ�С�������ַ����������ʱ�Զ�����\n\0�� �������Ĵ�С���ڵ���ԭʼָ���Ӧ������Ĵ�С�����Զ�����\0���������\n����ȫ�����룬����̶ܹ���С���ַ���
	puts(arr);
	return EXIT_SUCCESS;
}

int main013()
{
	char arr1[100];
	char arr2[100];
	int a, b, c;
	//1�����ܻ��н��������Խ��ܿո�
	//scanf("%[^\n]",arr);
	//2����scanf��ȡ����ʱ���鲻Ҫ����κ��ַ����ո����
	//scanf("%d %d %d", &a, &b, &c);
	//3�����޶��ַ���ȵĸ�ʽ��
	//scanf("%4d%4d%4d", &a, &b, &c);
	//scanf("%1s%2s", arr1, arr2);
	//4\������������ %*d �������� %*c�����ַ�
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