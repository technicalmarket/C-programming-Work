#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
 
struct Acc_Type
{
	int Acc_Number;
	char name[50];
	char branch[50];
	char bank_Name[50];
	char Address[50];
	int Amount; 
};
 
 
 struct Acc_Type acc[20];
 
 int num_acc;
 
void Create_new_account(void);
void Cash_Deposit(void);
void Cash_withdrawl(void);
void Account_information(void);
void Log_out(void);
void display_options(void);

int i = 0,num,choise;

void main(void)
{
	char programmer_name[] = "This Program Brought to you by Sourabh Potdar\r\n";
	printf("%s",programmer_name);
	display_options();
	getch();
	
}
void display_options(void)
{
		while(choise != 5)
	{
		printf("1. Create New Account :\r\n");
		printf("2. Cash Deposit       :\r\n");
		printf("3. Cash Withdrwal     :\r\n");
		printf("4. Account Information:\r\n");
		printf("5. Log Out            :\r\n");
		printf("6. Clear Screen and diplay Options :\r\n");
		printf("Please choose the Operation        :\r\n");
		scanf("%d",&choise);

		switch(choise)
		{
			case 1:
				Create_new_account();
				break;
			case 2:
				Cash_Deposit();
				break;
			case 3:
				Cash_withdrawl();
				break;
			case 4:
				Account_information();
				break;
			case 5:
				Log_out();
				break;
			case 6:
				system("cls");
				display_options();
				break;		
			default:
				printf("Wrong Choise?!?!?!?!\r\n");
				printf("Please Try Again\r\n");
				break;
		}
		
	}
	
}

void Create_new_account(void)
{
		printf("1. Enter the Account Number    :\r\n");
		scanf("%d",&acc[i].Acc_Number);
		printf("2. Name of the account holder  :\r\n");
		scanf("%s",&acc[i].name);
		printf("3. Your Bank Name              :\r\n");
		scanf("%s",&acc[i].bank_Name);
		printf("4. Your bank branch Name       :\r\n");
		scanf("%s",&acc[i].branch);
		printf("5. Account Holder's Address    :\r\n");
		scanf("%s",&acc[i].Address);
		printf("6. Amount in the account       :\r\n");
		scanf("%d",&acc[i].Amount);
		printf("Congratulation %s you have succesfully opened an account in %s Bank\r\n at Branch: %s with Amount: %d\r\n",acc[i].name,acc[i].bank_Name,acc[i].branch,acc[i].Amount);
		i++;
}
void Cash_Deposit(void)
{
	int temp,j,status = 0;
	printf("1. Enter the Account Number    :\r\n");
		scanf("%d",&temp);
	for(j=0;j<20;j++)
	{
		if(temp == acc[j].Acc_Number)
		{
		printf("1. Enter amount   :\r\n");
		scanf("%d",&num);
		acc[j].Amount = acc[j].Amount + num; 
		printf("1. Updated balance for account number %d is  %d  :\r\n",acc[j].Acc_Number,acc[j].Amount);
		break;
		}
		else
			{
				printf("Account Number Not found?!?!?!\r\n");
				break;
			}
	}
	
}
void Cash_withdrawl(void)
{
	int temp,j,status = 0;
	printf("1. Enter the Account Number    :\r\n");
		scanf("%d",&temp);
	for(j=0;j<20;j++)
	{
		if(temp == acc[j].Acc_Number)
		{
		printf("1. Enter the amount    :\r\n");
		scanf("%d",&num);
		if(num > acc[j].Amount)
			{
				printf("Insufficient Balance?!?!?!?!\r\n");
			}
		else
			{
				acc[j].Amount = acc[j].Amount - num; 
				printf("1. Updated balance for account number %d is  %d  :\r\n",acc[j].Acc_Number,acc[j].Amount);				
			}
			break;
		}
		else
			{
				printf("Account Number Not found?!?!?!\r\n");
				break;
			}
	}
	
}
void Account_information(void)
{
		int temp,j;
	printf("1. Enter the Account Number    :\r\n");
		scanf("%d",&temp);
	for(j=0;j<20;j++)
	{
		if(temp == acc[j].Acc_Number)
		{
			printf("1. Account Number              :%d\r\n",acc[j].Acc_Number);
			printf("2. Name of the account holder  :%s\r\n",acc[j].name);
			printf("3. Bank Name                   :%s\r\n",acc[j].bank_Name);
			printf("4. Bank branch Name            :%s\r\n",acc[j].branch);
			printf("5. Account Holder's Address    :%s\r\n",acc[j].Address);
			printf("6. Amount in the account       :%d\r\n",acc[j].Amount);
			break;
		}
		else
		{
			printf("Account Number Not found?!?!?!\r\n");
			break;
		}
	}
}
void Log_out(void)
{
	printf("Thank You!\r\n");
	printf("For Using my application\r\n");
	printf("Visit Again\r\n");
}
