#include<stdio.h>
void main()
{
int f1=0,f2=1,f3,i=3,len;
printf("enter the length of fibanocci");
scanf("%d",&len);
printf("%d\t%d",f1,f2);
while(i<=len)
{
f3=f1+f2;
printf("\t%d",f3);
f1=f2;
f2=f3;
i=i+1;
}
}
