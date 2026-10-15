#include<conio.h>
struct student
{
	int rollno;
	char name[30];
	float mark;
};
int main()
{
	struct student s[3];
	int i;
	for(i=0;i<3;i++)
	{
		printf("\n enter details of student %d\n",i+1);
		printf("enter roll number:");
		scanf("%d",&s[i].rollno);
		printf("enter name:");
		scanf("%s",&s[i].name);
		printf("enter mark:");
		scanf("%f",&s[i].mark);
}
    for(i=0;i<3;i++)
    {
    	printf("details of students %d\n",i+1);
    	printf("rollno:%d\n",s[i].rollno);
    	printf("name:%s\n",s[i].name);
    	printf("mark:%.2f\n",s[i].mark);
    	
	}
}
