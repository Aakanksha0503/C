//To check whether the given number is prime or not.
#include<stdio.h>
int main()
{
int i,n,count=0;
//clrscr();
printf("enter the value of n");
scanf("%d",&n);
for(i=1;i<=n;i=i+1)
{
if(n%i==0)
{
count=count+1;
}
}
if(count==2)
{
printf("prime no.");
}
else
{
printf("not a prime no.");
}
return 0;
}

