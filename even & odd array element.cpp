#include<stdio.h>
void even_odd(int);
main()
{
int a[5],i;
printf("enter the number");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
even_odd(a[i]);        //dont write here array need only array name a
}
}
void even_odd(int n)
{
n%2==0?printf("%d,even\n", n):printf("%d,odd\n", n);
}
