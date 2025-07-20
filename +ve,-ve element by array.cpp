//WAP PRIT ARRAY ELEMENT ARE +VE & -VE..

#include <stdio.h>
void positive_negative(int);
int main()
{
    int a[5],i;
    printf("enter the number");
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    positive_negative (a[i]);
    }}
    void positive_negative (int n)
    {
        printf("%s",n>0?"positive":"negative");
    }
