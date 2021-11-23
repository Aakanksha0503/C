#include<stdio.h>
int main()
{
	char s[100];
	printf("enter the string to be reversed\n");
	gets(s);
	strrev(s);
	printf("reverse of the strinf is :%s\n",s);
	return 0;
}
