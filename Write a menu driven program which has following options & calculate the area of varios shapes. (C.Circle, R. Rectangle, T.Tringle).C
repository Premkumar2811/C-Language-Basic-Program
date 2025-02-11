void main()
{

	char choice;
	float l,h,b,w,r,area;
	clrscr();

	printf("\n calculate area");
	printf("\n C.area of circle");
	printf("\n R.area of Rectangle");
	printf("\n T.area of tringle");
	printf("\n X.Exit the program");

	printf("\n Enter your choice=");
	scanf("%c",&choice);

	if(choice=='x')
		exit(0);

		switch(choice)
		{

		case 'C':
			printf("\n Enter Radios");
			scanf("%f",&r);
			area=3.14*r*r;
			printf("\n area of circle=%f",area);
			break;

		case 'R':
			printf("\n Enter leaght & Breadth");
			scanf("%f%f",&l,&w);
			area=l*w;
			printf("\n area of reactangle=%f",area);
			break;

		case 'T':
			printf("\n Enter the base & Haight");
			scanf("%f%f", &b,&h);
			area=0.5*b*h;
			printf("\n area of tringle=%f",area);
			break;

		default:
			printf("\nWrong Choice");

		}
		getch();
}