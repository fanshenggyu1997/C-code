#include<stdio.h>

void prim_num(int a);
int main(void)
{
	int a;
	printf("��������Ҫ�жϵ����֣�\n");

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
		printf("%d ��������\n",a);
	else printf("%d ����������\n",a);
}