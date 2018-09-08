
#include <stdio.h>
#include <stdlib.h>
long amount=1000, deposit, withdraw;
int choic, pin, k,K;
char c;
int main(){



				int count;
				start:printf("ENTER YOUR SECRET PIN NUMBER:");fflush(stdout);
				scanf("%d", &pin);
				while (pin != 1522)
				{printf("IVALID PASSWORD\n");count++;

				if(count<3)
				goto start;
				else
					{printf("YOUR ACCOUNT IS BLOCKED FOR ONE DAY");
					exit(0);}
				}K=0;
		menu:printf("WELCOME TO ABC BANK ATM SERVICES\n");
		while(K==0){printf("*******************************************************\n");
		printf("1. Check Balance\n");
		printf("2. Withdraw Cash\n");
		printf("3. Deposit Cash\n");
		printf("4. Quit\n");
		printf("*******************************************************\n");
		printf("ENTER YOUR CHOICE: ");
		fflush(stdout);
		scanf("%d",&choic);
		printf("choice is %d",choic);

			switch (choic){
				case 1:
					printf("\n YOUR BALANCE IN Rs : %lu ", amount); break;
				case 2:
					printf("\n ENTER THE AMOUNT TO WITHDRAW: ");fflush(stdout);
					scanf("%lu", &withdraw);
					if (withdraw % 100 != 0)
					{
						printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
					}
					else if (withdraw >(amount - 500))
					{
						printf("\n INSUFFICENT BALANCE");
					}
					else
					{
						amount = amount - withdraw;
						printf("\n\n PLEASE COLLECT CASH");
						printf("\n YOUR CURRENT BALANCE IS%lu", amount);
					}
					break;
				case 3:
					printf("\n ENTER THE AMOUNT TO DEPOSIT");fflush(stdout);
					scanf("%lu", &deposit);
		                        amount = amount + deposit;
					printf("YOUR BALANCE IS %lu", amount);
					break;
				case 4:
					printf("\n THANK U USING ATM"); exit(0);
					break;
				default:
					printf("\n INVALID CHOICE");
				}
			printf("WANT ANOTHER TRANSACTION? (yes-0/no-1");fflush(stdout);
			scanf("%d",&K);

			}printf("THANKYOU! VISIT AGAIN");

}



