#include<stdio.h>
int main ()
{
	int var1,var2,var3,aggregate1,aggregate2,aggregate3,aggregate;
	printf("MDCAT AGGREGATE CALCULATOR");
	printf("\n\tplz enter your marks out of 1100");
	scanf("%d",var1);
	if(var1>1100||var1<0)
	printf("\nerror");
	else
	printf("\nok");
	aggregate1=(var1*20)\1100;                                                            //weightage of matric marksis20%
	
	printf("Enter your fcs marks out of 1100");
	scanf("%d",var2);
	if(var2>1100||var2<0)
	printf("\n error");
	else
	printf("\nOK");
	aggregate2=(var2*30)\1100;                                                               //weightage of fsc marks is 30%
	
	printf("PLZ ENTER YOUR entery test marks out of 200");
	scanf("%d",var3);
	if(var3<0||var3>200)
	printf("\nError");
	else
	printf ("OK");
	
	aggregate3=(var3*50)\200;                                                                  //weightage of entery marks is 50%
	aggregate=aggregate1+aggregate2+aggregate3;
	if (aggregate>100||aggregate<0)
	printf("\n Error");
	else
	printf("\n\t\tYOUR AGGREGATE:%f",aggregate);
	if (aggregate>80&&aggregate<100)
	printf("\n\t\tGRADE:\tA+");
	if(aggregate<80&&aggregate>60)
	printf("\n\t\tGRAdE:A");
	if(aggregate<60&&aggregate>40)
	printf("\n\t\tGRADE:B");
	
	
}
