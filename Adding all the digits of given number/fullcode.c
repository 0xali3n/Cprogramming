#include<stdio.h>
int main()
{
    int n,sum=0,m;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("--------------------------------------------------------\n");
    printf("The Sum of digits is = 0");
    while(n>0)
    {
        m=n%10;
        sum=sum+m;
        n=n/10;
        printf("+%d",m);
    }
        printf("=%d\n",sum);
       printf("--------------------------------------------------------\n");
    return 0;
    }

//Enter a number:1234
//--------------------------------------------------------
//The Sum of digits is = 0+4+3+2+1=10
//--------------------------------------------------------
