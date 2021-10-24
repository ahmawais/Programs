#include<stdio.h>
int main ()
{
	
	int i=0,j=0,n;
	printf("Enter any number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
      for(j=1;j<=n;j++)
	  {
	  
	if (i==j)
	
		printf ("1");
		else
		printf ("0");
	}
	printf ("\n");
}
	
}
