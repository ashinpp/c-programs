#include<stdio.h>
main()
{
int year;
printf("Enter the year:");
scanf("%d",&year);
if(year%4==0||year%100==0)
{
printf("\n%d is a leap year\n",year);
}
else
{
printf("%d is not a leap year",year);
}
}
