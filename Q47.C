//Find HCF and LCM of two given numbers.
#include<stdio.h>
int main()
{
int n1,n2,i,lcm,hcf,min;
//clrscr();
printf("enter the values of n1 and n2");
scanf("%d%d",&n1,&n2);
min=(n1<n2)?n1:n2;
for(i=1;i<=min;i++)
{
if(n1%i==0 && n2%i==0)
{
hcf=i;
}
}
lcm=(n1*n2)/hcf;
printf("HCF=%d\nLCM=%d",hcf,lcm);
return 0;
}
