#include<stdio.h>
int main()
{
	int num[5]={10,20,30,40,50};
	printf("first element:%d\n",num[0]);
	printf("second element:%d\n",num[1]);
	printf("third element:%d\n",num[2]);
	printf("fourth element:%d\n",num[3]);
	num[3]=100;
	printf(" fourth element after modification:%d\n ",num[3]);
	return 0;
}
