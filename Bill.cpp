
// Usama Tufail(053)
//Ahmad Awais(123)

#include<stdio.h>
int main()
{
	int unit;
	float bill;
	printf (" Plz enter the amount of units\t");
	scanf ("%d", &unit);
	if(unit>0 && unit<=200)
	{
		bill=unit*5.12;
	}
	if(unit>200 && unit<=300)
	{
		bill=200*5.12+(unit-200)*10.20;
	}
	if(unit>300 && unit<=700)
	{
		bill=200*5.12+100*10.20+(unit-300)*15.45;
	}
	if(unit>700)
	{
		bill=200*5.12+100*10.20+400*15.45+(unit-700)*17.33;
	}
	bill=bill+15;
	bill=bill+(bill*17/100);

     printf("Bill=%f",bill);
   
}
