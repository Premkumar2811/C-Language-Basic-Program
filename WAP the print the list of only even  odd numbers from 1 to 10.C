void main()
{
	int x,esum=0,osum=0;
	clrscr();

	x=1;
	printf("\nEven\tOdd\n");
	while(x<=10)
	{
		if(x%2==0)
		{
			printf("\n%d",x);
			esum=esum+x;
		}
		else
		{
			printf("\t%d",x);
			osum=osum+x;
		}
		x=x+1;
	}
	printf("\n___\t___");
	printf("\n%d\t%d",esum,osum);

	getch();
}
