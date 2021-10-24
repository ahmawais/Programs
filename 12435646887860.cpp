#include <stdio.h>
int main ()
{
	int numb,i=0;
int min,max ;
	while ( i<10)
	{
		printf ("plz enter  10 numbers");
		scanf("%d",&numb );
		if (i==1)
		min=numb;
		max=numb;
		if(numb<min)
		min=numb;
		if( numb>max)
		max=numb;
	
		
		i++;
	}
		printf ("min is %d and max is %d", min, max);
	
	
	
}
