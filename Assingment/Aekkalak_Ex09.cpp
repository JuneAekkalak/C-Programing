typedef struct account accounttype;
struct account
{
	char ac_id[10];
	char ac_type;
	int ac_deposit;
	int ac_credit_limit;
};
typedef struct customer customertype;
struct customer
{
	char cus_id[10];
	char cus_name[15];
	char cus_sername[15];
	accounttype account;
};

#include "stdio.h"
#include "conio.h"
int main()
{
	customertype customer;
	int n, i;
	printf("\n\t\t\t\t\t\tInsert information of customer \n");
	printf("\t\t\t\t\t\tEnter customer ID :");
	scanf("%s", customer.cus_id);
	printf("\t\t\t\t\t\tEnter customer name :");
	scanf("%s", customer.cus_name);
	printf("\t\t\t\t\t\tEnter customer sername :");
	scanf("%s", customer.cus_sername);
	printf("\t\t\t\t\t\tEnter customer account ID :");
	scanf("%s", customer.account.ac_id);
	printf("\t\t\t\t\t\t 1 is Savings accoun\n");
	printf("\t\t\t\t\t\t 2 is current account\n");
	printf("\t\t\t\t\t\tPlase Select customer type account 1 or 2 :");
	scanf("%s", &customer.account.ac_type);
	printf("\t\t\t\t\t\tEnter deposit money :");
	scanf("%d", &customer.account.ac_deposit);
	if (customer.account.ac_type == '2')
	{
		printf("\t\t\t\t\t\tEnter customer credit limit :");
		scanf("%d", &customer.account.ac_credit_limit);
	}
	printf("\n");
	while (1)
	{
		printf("\t\t\t\t\t\t[1] Deposit money \n");
		printf("\t\t\t\t\t\t[2] Withdraw money \n");
		printf("\t\t\t\t\t\t[3] Show detail customer \n");
		printf("\t\t\t\t\t\t[4] Insert new customer \n");
		printf("\t\t\t\t\t\t[5] Exit programe \n");
		printf("\t\t\t\t\t\t Please select ");
		scanf("%d", &n);
		printf("\n");
		switch (n)
		{
		case 1:
			int a;
			printf("\t\t\t\t\t\t[1] Deposit money \n");
			printf("\t\t\t\t\t\tYour money in account has %d \n",customer.account.ac_deposit);
			printf("\t\t\t\t\t\tHow much will you Deposit money?");
			scanf("%d", &a);	
			customer.account.ac_deposit += a;	
			printf("\t\t\t\t\t\tDeposit successfully\n");
			printf("\n");
			break;
		case 2:
			int b;
			printf("\t\t\t\t\t\t[2] Withdraw money \n");
			printf("\t\t\t\t\t\tYour money in account has %d \n",customer.account.ac_deposit);
			printf("\t\t\t\t\t\tHow much will you withdraw money?");
			scanf("%d", &b);
			if(customer.account.ac_deposit >= b){
				customer.account.ac_deposit -= b;
				printf("\t\t\t\t\t\tSuccessful withdrawal\n");
			}
			else
				printf("\t\t\t\t\t\tCan't withdraw money Your funds are less than the amount to be withdrawn.\n");
			printf("\n");
			break;
		case 3:
			printf("\t\t\t\t\t\t[3] Show detail customer \n");
			printf("\t\t\t\t\t\tcustomer ID : %s \n", customer.cus_id);
			printf("\t\t\t\t\t\tcustomer name : %s \n", customer.cus_name);
			printf("\t\t\t\t\t\tcustomer sername : %s \n", customer.cus_sername);
			printf("\t\t\t\t\t\tcustomer account ID : %s \n", customer.account.ac_id);
			//printf("\t\t\t\t\t\tcustomer account type : %d \n",customer.account.ac_type);
			if (customer.account.ac_type == '1')
			{
				printf("\t\t\t\t\t\tcustomer account type : Savings account \n");
			}
			else
				printf("\t\t\t\t\t\tcustomer account type : current account \n");
			printf("\t\t\t\t\t\tdeposit money : %d\n", customer.account.ac_deposit);
			if (customer.account.ac_type == '2')
			{
				printf("\t\t\t\t\t\tcredit limit : %d", customer.account.ac_credit_limit);
			}
			printf("\n\n");
			break;
		case 4:
			printf("\n\t\t\t\t\t\t[4] Insert information of customer \n");
			printf("\t\t\t\t\t\tEnter customer ID :");
			scanf("%s", &customer.cus_id);
			printf("\t\t\t\t\t\tEnter customer name :");
			scanf("%s", customer.cus_name);
			printf("\t\t\t\t\t\tEnter customer sername :");
			scanf("%s", customer.cus_sername);
			printf("\t\t\t\t\t\tEnter customer account ID :");
			scanf("%s", &customer.account.ac_id);
			printf("\t\t\t\t\t\t 1 is Savings accoun\n");
			printf("\t\t\t\t\t\t 2 is current account\n");
			printf("\t\t\t\t\t\tPlase Select customer type account 1 or 2 :");
			scanf("%s", &customer.account.ac_type);
			printf("\t\t\t\t\t\tEnter deposit money :");
			scanf("%d", &customer.account.ac_deposit);
			if (customer.account.ac_type == '2')
			{
				printf("\t\t\t\t\t\tEnter customer credit limit :");
				scanf("%d", &customer.account.ac_credit_limit);
			}
			printf("\n");
			break;
		default:
			if (n < 1 || n > 5)
			{
				printf("\t\t\t\t\t\tInvalid number!! please select new number..  \n\n");
			}
		}
		if (n == 5)
		{
			break;
		}
	}
}
