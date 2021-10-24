#include<stdio.h>
int main ()
{
	int unit,bill;
	printf("plz enter the units");
	scanf ("%d",&unit);
	if (unit <=100)
	{
		unit=unit*2;
		unit=unit-0.1;
		printf ("\n Bill is %d", unit);
	}
	if (unit>100&&unit<=200)
	{
		unit=(unit-100)*2;
		unit=unit*3;
		unit=unit-0.2;
		printf ("\n Bill is %d", unit);
		
	}
	if(unit>200)
	{
		unit=(unit-100)*2;
		unit=(unit-100)*3;
		unit=(unit*5) -0.3;
		printf ("\n Bill is %d", unit);
		
	}
	printf ("\nThanks forv using our program");
	
	
}
