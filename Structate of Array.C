struct student
{
	int roll;
	char name[10];
	int m1,m2,m3,total;
	float per;

};

void main()
{
	struct student s[5];
	int i;
	clrscr();

	printf("\n Enter the student Detail=");
	for(i=0;i<3;i++)
	{
		scanf("%d%s%d%d%d",&s[i].roll,s[i].name,&s[i].m1,&s[i].m2,&s[i].m3);
	}
	printf("\n Roll \t Name \t M1 \t M2 \t M3 \t\t Total \t Percentage");
	for(i=0;i<3;i++)

	{
		s[i].total=s[i].m1+s[i].m2+s[i].m3;
		s[i].per=(float)s[i].total/3;

		printf("\n%d\t%s\t%d\t%d\t%d\t",s[i].roll,s[i].name,s[i].m1,s[i].m2,s[i].m3);

		printf("\t%d",s[i].total);
		printf("\t%2f",s[i].per);
	}
	getch();
}