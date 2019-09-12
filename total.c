#include<stdio.h>
int main()
{
int a,b,c,d,e,sum;
printf("enter your marks\n");
scanf("%d\n %d\n %d\n %d\n %d",&a,&b,&c,&d,&e);
sum=a+b+c+d+e;
printf("%d\n",sum);
if(a>=50 && b>=50 && c>=50 && d>=50 && e>=50)
{
printf("pass");
}
else
{
printf("fail");
}
return 0;
}
