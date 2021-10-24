#include<stdio.h>
int main ()
{
	int num,even=0,odd=0, i=1;
	while ( i<=10)
	{
	
	printf("\nPlz enter 10 numbers  ");
	scanf ("%d",&num);
	if ( num%2==0)
	{
	even= even +1;
	
		
		}
		if(num%2!=0)
		{
		odd=odd+1;
		
	    }
		i++;
		
	
	
	}
	printf ("\nThere are %d even num and %d odd num",even,odd);
	
	
	
	
	
	
}
