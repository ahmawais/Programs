#include<stdio.h>
int main()
{
    int length,beg,a,b;
    printf("\nPlz enter the value of length");
    scanf("%d",&length);
    if(length>=1 && length<=10)
        printf("");
    else
        printf("\nInvalid input\n");

    printf("\nPlz enter the value of beg ");
    scanf("%d",&beg);
 a=length;
    while(a>=1)
    {
        b=1;
        while(b<=a)
        {
            if(beg>=1 && beg <=9)
            printf("%d",beg);
            beg++;
            if(beg==10)
            {
                beg=1;
            }
        b++;
        }
    printf("\n");
    a--;
    }
}

