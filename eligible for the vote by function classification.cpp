#include<stdio.h>
void eligible (int);  //declaration
main()
{
int a;
printf("enter the age");
scanf("%d",&a);
eligible(a);     //calling
}
void eligible(int a)   //defination
{
if(a>18)
printf("%d is eligible",a);
else
printf("%d is not eligible",a);	
}
