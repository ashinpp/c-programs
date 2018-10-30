#include<stdio.h>
main()
{
int a1,a2,b1,b2,b3;
printf("enter the value of a1 and a2\n");
scanf("%3d%5d",&a1,&a2);
printf("a1=%3d\na2=%-5d",a1,a2);
printf("a1=%3d\na2=%05\n",a1,a2);
printf("\nenter the value of b1,b2,b3\n");
scanf("%3d%*4d%6d",b1,b2,b3);
printf("b1=%3d\nb2=%4d\nb3=%6d",b1,b2,b3);
}
