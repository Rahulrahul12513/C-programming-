#include<stdio.h>
int main()
{
	int a;
	printf("enter the number:\n");
	scanf("%d",&a);
	int res=(a%10==0);
	printf("the %d is an factor number is %",a,res);
return 0;
}	
