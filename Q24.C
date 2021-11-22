/*Program to separate decimal and 
integer part of given floating point number.*/
#include<stdio.h>
int main()
{
int c;float a,b;
//clrscr();
printf("enter a floating point number a");
scanf("%f",&a);
c=a;
b= a - c;  
printf("c=%d\n",c);
printf("b=%f\n",b);
return 0;
}
