#include<stdio.h>
void swap1(int,int);
void swap2(int *,int *);
main()
{
int a=2,b=5;
printf("----CALL BY VALUE----");
printf("\n\ntBefore Swapping\n\t a=%d b=%d",a,b);
printf("\n\tAfter swapping");
swap1(a,b);
printf("\n\t a=%d   b=%d  (Actual parameters)",a,b);
printf("\n\n-----CALL BY REFERENCE-----");
printf("\n\tBefore swapping \n\a=%d b=%d",a,b);
printf("\n\tAfter swapping");
swap2(&a,&b);
printf("\n\t a=%d b=%d (Actual parameters)",a,b);
}
void swap1(int p,int q)
{
int temp;
temp=p;
p=q;
q=temp;
printf("\n\tp=%d  q=%d (Formal parameters)",p,q);
}
void swap2(int *x,int *y)
{
int temp1;
temp1=*x;
*x=*y;
*y=temp1;
printf("\n\tx=%d  y=%d (formal parameters)",*x,*y);
}
 
