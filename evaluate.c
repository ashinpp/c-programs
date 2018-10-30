#include<stdio.h>
main()
{
int  x,y=1,count=1,n;
printf("Enter the value of x and n:");
scanf("%d%d",&x,&n);
while(count<=n)
{
y=y*x;
count++;
}
printf("\nx=%d n=%d\n x^n=%d",x,n,y);
}
