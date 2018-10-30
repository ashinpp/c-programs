#include<stdio.h>
main()
{
int i,n,sum=0;
for(i=1;i<=10;i++)
{
printf("\nEnter a no:");
scanf("%d",&n);
if(n<0)
{
continue;
}
sum+=n;
}
printf("sum=%d",sum);
}
