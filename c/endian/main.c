#include <stdio.h>
#include <sys/time.h>

int main()
{
	int i = 0x12345678;
	char *p0 = (char *)&i;
	char *p1 = (char *)&i + 1;
	char *p2 = (char *)&i + 2;
	char *p3 = (char *)&i + 3;

	printf("i=%x\n", i);
	printf("&i=%x\n", &i);
	printf("p0=%x *p%d=%x\n",  p0, 0,*p0);	
	printf("p0=%x *p%d=%x\n",  p1, 1,*p1);	
	printf("p0=%x *p%d=%x\n",  p2, 2,*p2);	
	printf("p0=%x *p%d=%x\n",  p3, 3,*p3);	
	
	short j = 0x1234;
	char *pp0 = (char *)&j;
	char *pp1 = (char *)&j + 1;
	char *pp2 = (char *)&j + 2;
	char *pp3 = (char *)&j + 3;

	printf("j=%x\n", j);
	printf("&j=%x\n", &j);
	printf("pp0=%x *p%d=%x\n",  pp0, 0, *pp0);	
	printf("pp0=%x *p%d=%x\n",  pp1, 1, *pp1);	
	printf("pp0=%x *p%d=%x\n",  pp2, 2, *pp2);	
	printf("pp0=%x *p%d=%x\n",  pp3, 3, *pp3);	
	return 0;
}