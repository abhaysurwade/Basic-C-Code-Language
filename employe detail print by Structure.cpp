#include<stdio.h>
#include<string.h>
struct emp
{
	int eid;
	char ename[20];
	float esal;
};
int main()
{
	struct emp e;
	e.eid=10;
	strcpy(e.ename,"Abhay");         
	e.esal=20000.5;
	printf("Emp ID %d\n",e.eid);
	printf("Emp Name %s\n",e.ename);
	printf("Emp Sal %f",e.esal);
	return 0;
}
