#include<stdio.h>
int fibo(int);
main()
{int n,r;
printf("enter nth term");
scanf("%d",&n);
r=fibo(n);
printf("the %d number in fibanocci series is %d",n,r);
return 0;
}
int fibo(int n)
{
if(n==0)
return 0;
else 
if(n==1)
return 1;
else
return(fibo(n-1)+fibo(n-2));
}
