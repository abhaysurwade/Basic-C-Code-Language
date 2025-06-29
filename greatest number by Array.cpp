#include <stdio.h>
int main()
{
int a[5],i,greatest;
for(i=0;i<5;i++)
{
printf("enter the elememt");
scanf("%d",&a[i]);
greatest=a[0];
}
for(i=0;i<5;i++)
{
if(greatest<a[i])
greatest=a[i];
}
printf("%d",greatest);
}

