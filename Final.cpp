#include <stdio.h>
int main ()
{
	int base, power , i=1 ,ans=1;
	printf (" Plz enter base and power ");
	scanf ("%d %d",&base,&power);
	while(i<=power)
	{
		ans=ans*base;
		i++;
		
	}
	printf ("%d", ans);
	
	
}
