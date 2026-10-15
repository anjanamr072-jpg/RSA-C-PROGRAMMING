#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int *p,n,i;
printf("enter the elements:");
scanf("%d",&n);
p=(int *)malloc(n*sizeof(int));
if(p==NULL)
{
	printf("memory allocation failed:");
}
printf("enter the elements:");
for(i=0;i<n;i++)
{
	scanf("%d",&p[i]);
}

printf("elements:\n");
for(i=0;i<n;i++)
{
	printf("%d",p[i]);
}
free(p);
return 0;
}
