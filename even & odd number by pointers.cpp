// WRA TO CHECK EVEN OR ODD NUMBER BY POINTERS..

#include<stdio.h>
main()
{
	int a,*p;
	printf("enter the number");
	scanf("%d",&a);
	p=&a;
	if(*p%2==0)
	printf("%d even",*p);
	else
	printf("%d odd",*p);
	return 0;
}
