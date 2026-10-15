#include<stdio.h>
#include<conio.h>
int main()
{
	int a[]={10,20,30,40};
	int *p=a;
	printf("value=%d\n",*p);
	p++;
	printf("value after increment=%d\n",*p);
	p++;
	printf("value after increment=%d\n",*p);
	
}
