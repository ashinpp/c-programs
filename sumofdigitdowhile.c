#include<stdio.h>
void main()
{
int n,sum=0;
printf("enter the  number");
scanf("%d",&n);
int i=1;
do
{
sum=sum+n;
i++;
}
while(i<n);
printf("\nthe sum is=%d",sum);
}
