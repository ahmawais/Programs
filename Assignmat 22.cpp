#include<stdio.h>
int main ()
{
	int i, j ,size ,start;
    printf (" Plz enter the value of size and start");
	printf ("\nsize =");
	scanf("\n%d", &size);
	if (  size>=1&&size<=10)
	printf (" ");
 else
 printf (" max than 10\n");
 
	printf ("start=");
    scanf ("\n%d", &start);
   i=size;
   while (i>=1)
   {
   	
   	
   	
   	j=1;
   	while (j<=i)
   {
   	if(start>=1&&start<=9)
	   	printf ("%d ", start);
   	
	   else
	   printf ("\nsize is out of range");
	   start ++;
   	if (start ==10)
  {
  
  
start=1;
  
  
   }
j++;
	
	
}
printf ("\n");
i--;
}
}

