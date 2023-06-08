//ATM_MACHINE
#include<stdio.h>
#include<stdlib.h>


void check_balance() //function to check balance
{
	int balance =5000;
	printf("Your Balance is :$%d\n",balance);
}

void cash_deposit() // function to add money while deposition
{
	int deposit;
	int balance =5000;
	printf("Enter the amount you want to deposit: $");
	scanf("%d",&deposit);
	balance+=deposit;
	printf("Your updated balance after deposition is: $%d\n",balance);
}

void cash_withdrawl() //function to withdraw money
{
	int withdrawl;
	int balance =5000;
	printf("Enter the amount you want to withdraw: $");
	scanf("%d",&withdrawl);
	if(withdrawl>balance){
		printf("Insufficient Balance!!");
		
	}
	else{
		balance-=withdrawl;
	    printf("Your updated balance after withdrawl is: $%d\n",balance);    
	}
	
}

void pin_change() //function to change the pin
{
	int new_pin;
	printf("\nChange the pin\n");
	printf("Enter the new Pin:");
	scanf("%d",&new_pin);
	printf("Your pin is updated sucessfully\n");
}

int main()
{
	int option ,pin;
	
	printf("!!Welcome to the Atm Machine System!!\n");
	printf("Choose from the below options to perform any functions!\n\n");
	printf("1.Balance Enquiry\n");
	printf("2.Cash Deposit\n");
	printf("3.Cash Withdrawl\n");
	printf("4.PIN Change\n");
	printf("Enter the Pin:");
	scanf("%d",&pin);
	printf("Options :");
	scanf("%d",&option);
	if(pin==9021){  // to check whether the pin is right or wrong
		switch(option){  // switch case to select the options
			case 1:
				check_balance();
				break;
			case 2:
				cash_deposit();
				break;
			case 3:
				cash_withdrawl();
				break;
			case 4:
				pin_change();
				break;
			default:
				printf("Invalid input among the options");
				
		}
	}
	else{
		printf("Invalid PIN , Please input it again\n");
	}
	
	return 0;
}
