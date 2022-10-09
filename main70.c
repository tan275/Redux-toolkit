#include<stdio.h>
void main()
{
	float Enter_call,amount;
	printf("Enter the call: ");
	scanf("%f",&Enter_call);
	if(Enter_call<=100)
	{
		amount=Enter_call*1.25;
	}
	else if(Enter_call>100)
	{
		amount=250+(Enter_call*1.25);
	}
	printf("The Bill for customer is: %.2f",amount);
}
