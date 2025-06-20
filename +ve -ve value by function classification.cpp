#include<stdio.h>
void positive (int);   //declaration
main()
{
int a;
printf("enter the number");
scanf("%d",&a);
positive (a);      //calling
}
void positive(int a)     //defination
{
	if(a>0)
	printf("%d is positive",a);
	else
	printf("%d is negative",a);
}

