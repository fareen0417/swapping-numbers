#include<stdio.h>
int main()
{
	int a,b;
	printf ("enter the value of a:");
	scanf("%d,&a");
	printf("enter the value of b:");
	scanf("%d,&b");
	printf("before swapping...a: %d, b: %d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping...a: %d,b: %d\n",a,b);
	return 0;
	}
