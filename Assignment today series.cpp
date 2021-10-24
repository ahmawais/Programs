#include<stdio.h>
int main()
{
	int x,n,fac,pow,counter,checker;
	printf("Enter the value of X=");
	scanf("%d",&x);
	printf("Enter the value of N=");
	scanf("%d",&n);
	float sum,y;
	counter=1;
	pow=1;
	fac=1;
	sum=0;
	checker=0;
	while(counter<=n)
	{
		pow=pow*x;
		fac=fac*counter;
		
		if(counter%2==1)
		{
			y=1.0*pow/fac;
			if(checker%2==0)
			    sum=sum+y;
			else
			    sum=sum-y;
		checker++;
		}
		
		counter++;
	}
	printf("sum=%f",sum);
	return 0;
}
