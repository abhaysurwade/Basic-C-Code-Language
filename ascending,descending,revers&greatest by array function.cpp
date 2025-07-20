//WAP ASCENDING,DESCENDING,REVERS,GREATEST PROGRAM IN ARRAY...

#include<stdio.h>
void ascending (int);
void descending (int);
void revers (int);
void greatest (int);
main()
{
	int a[5],i;
	printf("enter the element");
	for(i=0;i<5;i++)
	{
	scanf("%d",a[i]);	
	}
	ascending (a[i]);
	descending (a[i]);
	revers(a[i]);
	greatest (a[i]);
}
void ascending (int a)
{

	int a[5],i,j,temp;
	printf("enter the number");
	for(i=0;i<5;i++)
    {
	for(j=i+1;j<5;j++)
	{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	}}
	prtinf("%d",a[i]);
    }
    

	

