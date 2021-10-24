#include <stdio.h>
int main ()
{
	int num,sum =0, i=1, avg;

while(i<=5)
	{
	
	printf (" \nPlz enter a numbers");
	scanf ("%d", &num);	
		sum= sum+num;
		
		i++;
		
		
	}
	avg = sum/(5*0.1);
	printf ("\n\taverage  is %d", avg);
	
	
	
	

	
	
}
