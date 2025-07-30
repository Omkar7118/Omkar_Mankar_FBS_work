#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
	int marks;
};
void main()
{
	struct student s1,s2,s3;
	printf("Enter roll no,name,marks of student 1 : ");
	scanf("%d %s %d",&s1.rollno,&s1.name,&s1.marks);
	printf("Enter roll no,name,marks of student 2 : ");
	scanf("%d %s %d",&s2.rollno,&s2.name,&s2.marks);
	printf("Enter roll no,name,marks of student 3 : ");
	scanf("%d %s %d",&s3.rollno,&s3.name,&s3.marks);
	printf("Student roll no = %d name = %s marks = %d",s1.rollno,s1.name,s1.marks);
	printf("\nStudent roll no = %d name = %s marks = %d",s2.rollno,s2.name,s2.marks);
	printf("\nStudent roll no = %d name = %s marks = %d",s3.rollno,s3.name,s3.marks);
}