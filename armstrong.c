#include<stdio.h>
main()
{
int n1,n2,i,r,temp1,temp2,result=0,n=0;
printf("Enter the lower limit:"); 
scanf("%d",&n1);
printf("\nEnter the upper limit:");
scanf("%d",&n2);
printf("\nThe armstrong nos are:");
for(i=n1+1;i<n2;i++)
{
temp1=i;
temp2=i;
while(temp1!=0)
{
temp1=temp1/10;
n++;
}
while(temp2!=0)
{
r=temp2%10;
result=result+r*r*r;
temp2=temp2/10;
}
if(result==i)
{
printf("\t%d",i);
}
n=0;
result=0;
}
}
