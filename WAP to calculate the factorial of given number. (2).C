#include<stdio.h>
int main()
{
	int i=1,n,f=1;

	printf("\n Enter the number=");
	scanf("\n %d", &n);

	while(i<=n)
	{
		f=f*i;
		i++;
	}
	printf("\nfactorial=%d",f);

	return 0;

}
