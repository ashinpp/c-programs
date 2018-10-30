#include<stdio.h>
main()
{
  float m1,m2,m3,m4,m5,total,percent;
  printf("enter the 5 mark");
  scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
  percent=(total*100/500);
  if(percent>=90)
{
 printf("grade is distinction");
}
else if(percent>=80&&percent<90)
{
 printf("grade is A");
}
else if(percent>=70&&percent<80)
{
printf("grade is B");
}
else if(percent>=60&&percent<70)
{
printf("grade is C");
}
else if(percent>=50&&percent<60)
{
printf("grade is D");
}
else 
{
printf("grade is E");
}
}
  
