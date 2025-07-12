//sum of array element using pointer 
#include<stdio.h>
main()
{
	int a[5],i,*p,sum=0;
	for(i=0;i<5;i++)
	{
	printf("enter the element:\n");
	scanf("%d",&a[i]);
	p=a;
    }
	for(i=0;i<5;i++)
	{
	sum=sum+(*p+i);
	printf("%d sum of the element\n",sum);
    }
    return 0;
}
