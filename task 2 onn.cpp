#include<stdio.h>
int main ()
{
	int i=0 ,n,num,sum=0;
	float avg;
	
	printf (" \nPlz enter a number");
	 scanf ("%d",&n );
	 
	 
	 while ( i<n )
	 {
	 
	 
	 printf (" \nPlz enter a number");
	 scanf ("%d",&num);
	 sum =sum +num;
	 i++;
	 
    }
    avg =sum/(n*1.0);
    printf (" \n avg is %f", avg);
    
	
}
