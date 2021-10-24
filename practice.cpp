#include<stdio.h>
int main ()
{
	int base , power, i, fac=1;
	printf (" plz enter the value of base and power");
	scanf ("%d %d",&base , &power );
	for ( i=0 ; i<power; i++)
	
		fac= fac*base*(base-1);
		printf ("\n Factorial is %d",fac);
		
		
	
	
	
	
	
	
}
