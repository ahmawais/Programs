#include<stdio.h>
int main()
{
	int unit;
	float bill,a,b,c,d,x,y,t,z,g,f;
	bill=0;
	a=0; b=0; c=0; d=0; x=0; y=0; t=0; z=0;g=0; f=0;
	printf (" Plz enter the amount of units");
	scanf ("%d", &unit);
	
	a=unit-200;
   	b=unit-a;
     	
	if (b>0 && b<=200)
    {
    	bill=b*5.12;
    } 
       x=unit-300;
       y=unit-x;
       
    	if (y>200&&y<=300)
    	{
    		bill=bill+y*10.20;
		}
		t=unit-700;
		z=unit-t;
		if (z>300&&z<=700)
    	{
    		bill=bill+z*15.45;
		}
		g=unit-700;
		
		if (g>700)
		{
			bill=bill+g*17.33;
		}
	printf("\nBill=%f",bill);
}
