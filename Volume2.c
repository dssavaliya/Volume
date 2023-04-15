#include<stdio.h>
struct Student
{
int	enrollment;
char name[100];
int	chem_mark;
int	phy_mark;
int	maths_mark;
float per;
int sum;
};
main()
{
	int n=5;
	int i;
	struct Student s[5];
	for(i=0;i<5;i++)
	{
		printf("Enter Name :- ");
		scanf("%s",&s[i].name);
		printf("Enter Enrollment_No :- ");
		scanf("%d",&s[i].enrollment);
		printf("Enter Physics Mark :- ");
		scanf("%d",&s[i].phy_mark);
		printf("Enter Chemistry Mark :- ");
		scanf("%d",&s[i].chem_mark);
		printf("Enter Maths Mark :- ");
		scanf("%d",&s[i].maths_mark);

	}
	printf("-----------------------------------------");
	for(i=0;i<5;i++)
	{
		s[i].sum =(s[i].phy_mark+s[i].chem_mark+s[i].maths_mark);
		s[i].per = (s[i].sum/3);
printf("\nName = %s\nEnrollment_No = %d\n",s[i].name,s[i].enrollment);
printf("Physics Mark = %d\nChemistry Mark = %d\nMaths Mark =%d\n",s[i].phy_mark,s[i].chem_mark,s[i].maths_mark);
printf("PR = %.2f\n",s[i].per);
	}
	
	
	
	
}
