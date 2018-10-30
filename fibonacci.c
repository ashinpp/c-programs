#include<stdio.h>
main()
{
int f1=0,f2=1,f3,i=3,limit;
printf("ente the limit:");
scanf("%d",&limit);
printf("\nThe fibonacci series: %d %d",f1,f2);
while(i<limit)
{
f3=f1+f2;
printf("\t%d",f3);
f1=f2;f2=f3;
i++;
}
}
