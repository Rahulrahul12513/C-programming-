#include<stdio.h>
int main()
{
	char a;
	printf("enter the character:\n");
	scanf("%c",&a);
	int res=(a>='A' && a<='Z');
	printf("the %d is an upper case character is %d",a,res);
    return 0;
}
