#include<stdio.h>
int main()
{
	int amountspent;
	float discount,netamount;
	printf("enter amount spent\n");
	scanf("%d",&amountspent);
	if(amountspent>=10000 &&amountspent<15000)
	{
		discount=0.1;
		netamount=amountspent-(discount*amountspent);
	}
	else if(amountspent>=15000 &&amountspent<25000)
	{
		discount=0.15;
		netamount=amountspent-(discount*amountspent);
	}
	else if(amountspent>=25000 &&amountspent<30000)
	{
		discount=0.2;
		netamount=amountspent-(discount*amountspent);
	}
	else if(amountspent>30000)
	{
		discount=0.25;
		netamount=amountspent-(discount*amountspent);
	}
	else
	{
		printf("amount spent too low for discount");
		netamount=amountspent;
	}
	printf("the net amount paid is = %2f\n",netamount); 
	return 0;
}
