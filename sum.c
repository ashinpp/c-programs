#include<stdio.h>
main()
{
int num,sum=0,rem;
printf("Enter a number\n");
scanf("%d",&num);
while(num>0)
{
rem=num%10;
sum=sum+rem;
num=num/10;
}
printf("\n sum of digits=%d",sum);
}
