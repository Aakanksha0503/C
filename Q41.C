//To display all prime numbers in a given range.
#include<stdio.h>
int main()
{
int n1,n2,i,j;
//clrscr();
printf("enter the value of n1 and n2");
scanf("%d%d",&n1,&n2);
for(i=n1;i<=n2;i++)
{
for(j=2;j<=i;j++)
{
if(i%j==0)
break;
}
if(i==j)
printf("%d\t",j);
}
return 0;
}


