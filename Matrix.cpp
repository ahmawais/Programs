#include<stdio.h>
int main ()
{
	int i ,j ,n;
	printf (" Plz enter a number");
	scanf ("%d",&n);
	for (j=1;j <=n;j++)
	{
		for(i=1;i<=n;i++)
		{
			if (i==j)
			printf ("1");
			else
			printf ("0");
			
		}
		printf ("\n");
	}
	
}
