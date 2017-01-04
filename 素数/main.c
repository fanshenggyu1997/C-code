#include<stdio.h>

void prim_num(int a);
int main(void)
{
	int a;
	printf("请输入需要判断的数字：\n");

	scanf("%d",&a);
	prim_num(a);
	getch();
	return 0;
}

void prim_num(int a)
{
	int i=2;
	while (a%i)
	{
		i++;
	}
	if (i >= a)
		printf("%d 是素数！\n",a);
	else printf("%d 不是素数！\n",a);
}