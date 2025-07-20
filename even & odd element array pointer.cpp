// count even,odd  element using pointer aaray 
#include<stdio.h>
int main()
{
	int a[5],i,*p,even=0,odd=0;
	for(i=0;i<5;i++)
	{
	printf("enter the element:\n");
	scanf("%d",&a[i]);
    }
	p=a;
	for(i=0;i<5;i++)
	{
	if(*(p+i)%2==0)
	even++;
	else
	odd++;
	}
	printf("\n total even=%d total odd=%d",even,odd);
	return 0;
}
