//Swap two numbers without using third variable.
#include<stdio.h>
int main()
{
int a,b;
//clrscr();
printf("enter the values of a and b");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("swapped values a=%d , b=%d",a,b);
return 0;
}
