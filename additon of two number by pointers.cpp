// addition of two numbers by pointers...
#include<stdio.h>
int main()
{
	int a,b,*p,*q,c;
	printf("enter the number\n");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	c=*p+*q;
	printf("%d addition\n",c);
	return 0;
	
}
