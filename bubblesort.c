#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50],i,j,n,temp;
	printf("enter the elements:\n");
	scanf("%d",&n);
	printf("the elements are:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("elements:\n");
	{
		printf("%d",a[i]);
	}
	printf("elements:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		    }
		}
		
	}
	for(i=0;i<n;i++)
	{
	printf("%d",a[i]);
	}
}
