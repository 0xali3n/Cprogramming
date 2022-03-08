#include <stdio.h>
main()
{

	int c,rem1,reem,ttl;
	printf("Enter the total chocolates: ");
	scanf("%d",&c);
	rem1=c/3;
	reem=c%3;
	ttl=rem1+reem;
	printf("\n");
	printf("------------------------------------------------------------------------------------------\n");

	if(ttl>=3)
        printf("The total Chocolates are = %d+%d",c,rem1);
    else
        printf("The total Chocolates are = %d",c);
    solve:
    rem1=ttl/3;
    reem=ttl%3;
    ttl=rem1+reem;
    if(ttl>=3)
        printf("+%d",rem1);
    else
        printf("+%d\n",rem1);

    if (ttl>=3)
        goto solve;
    printf("------------------------------------------------------------------------------------------\n");



}
