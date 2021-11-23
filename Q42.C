//To find reverse of a given number.
#include<stdio.h>
int main()
{
int n,i,r,rev=0;
//clrscr();
printf("enter the value of n");
scanf("%d",&n);
while(n>0)
{
r=n%10;
rev=r+(rev*10);
n=n/10;
}
printf("reverse no.=%d",rev);
return 0;
}
