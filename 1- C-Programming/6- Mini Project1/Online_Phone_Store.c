/*
 * main.c
 *
 *  Created on: Jul 27, 2022
 *      Author: Mahmoud Essam
 */
#include "stdio.h"

//	- The item name, price, and if overnight shipping is needed.
//	- Regular shipping for items under 10$ is 2$, and for items 10$ or more is 3$. For overnight delivery add 5$.
//	- 2 items are required as a minimum for one order.
//	- If the customer ordered more than 5 items, they will get a 20% discount on the total fee.
//	- There must be a choice for the customer to either continue shopping or finish the order.
//	- A detailed receipt or invoice should be displayed for the customer.

#define DPRINTF(...)	{fflush(stdout);\
		fflush(stdin);\
		printf(__VA_ARGS__);\
		fflush(stdout);\
		fflush(stdin);}


int main()
{
	while(1)
	{
		DPRINTF("\t\tWeclome to the online phone store\n");
		DPRINTF("Choose items from the following\n");

		// Menue
		DPRINTF("1- Xaomi Redmi Buds 3   --> 15$ / No Overnight shipping is needed.\n");
		DPRINTF("2- Samsung air dots 2   --> 20$ / No Overnight shipping is needed.\n");
		DPRINTF("3- Joyroom JR T03S      --> 19$ / No Overnight shipping is needed.\n");
		DPRINTF("4- Xaomi Buds Cover     --> 2$  / No Overnight shipping is needed.\n");
		DPRINTF("5- Samsung A21s Cover   --> 5$  / No Overnight shipping is needed.\n");
		DPRINTF("6- IPhone 8 Cover       --> 8$  / No Overnight shipping is needed.\n");
		DPRINTF("7- A21s cover screen    --> 2$  / No Overnight shipping is needed.\n");
		DPRINTF("8- Wireless charger     --> 9$  / No Overnight shipping is needed.\n");
		DPRINTF("9- Samsung SD Card 32GB --> 10$ / No Overnight shipping is needed.\n");
		DPRINTF("2- Samsung SD Card 64GB --> 16$ / No Overnight shipping is needed.\n");

		int itemsNumber = 0, shippingFee, choice;
		float totalFee = 0.0, discount;
		DPRINTF("Enter The number of items you will buy : ");
		scanf("%d",&itemsNumber);

		// check if the number of items is less than 2
		if(itemsNumber < 2)
		{
			DPRINTF("2 items are required as a minimum for one order.\n");
			break;
		}

		int items[itemsNumber];
		int prices[10] = {15, 20, 19, 2, 5, 8, 2, 9, 10, 16};

		// scan the items in an array
		for(int i =0; i < itemsNumber; i++)
		{
			DPRINTF("Enter item %d : ",i+1);
			scanf("%d",&items[i]);
		}

		// calculate total fee
		for(int i = 0; i < itemsNumber; i++)
			totalFee += prices[items[i]];


		// calculate shipping fee
		if(totalFee < 10)
			shippingFee = 2;
		else
			shippingFee = 3;


		// Print a detailed receipt
		for(int i = 0; i < itemsNumber; i++)
		{
			switch(items[i])
			{
			case 1 :
				DPRINTF("Xaomi Redmi Buds 3   --> 15$ \n");
				break;
			case 2 :
				DPRINTF("Samsung air dots 2   --> 20$\n");
				break;
			case 3 :
				DPRINTF("Joyroom JR T03S      --> 19$\n");
				break;
			case 4 :
				DPRINTF("Xaomi Buds Cover     --> 2$\n");
				break;
			case 5 :
				DPRINTF("Samsung A21s Cover   --> 5$\n");
				break;
			case 6 :
				DPRINTF("IPhone 8 Cover       --> 8$\n");
				break;
			case 7 :
				DPRINTF("A21s cover screen    --> 2$\n");
				break;
			case 8 :
				DPRINTF("Wireless charger     --> 9$\n");
				break;
			case 9 :
				DPRINTF("Samsung SD Card 32GB --> 10$\n");
				break;
			case 10 :
				DPRINTF("Samsung SD Card 64GB --> 16$\n");
				break;
			}
		}
		DPRINTF("Total Fee = shipping fee of (%d$) + total fee(%.2f$) = %.2f$\n",shippingFee,totalFee,shippingFee+totalFee);

		//check if there will be a discount
		if(itemsNumber > 5)
		{
			discount = totalFee*0.2;
			totalFee = totalFee - discount;
			DPRINTF("Total Fee after 20%% discount is %.2f$\n",totalFee);

		}

		DPRINTF("Enter 1 to continue shopping and 0 to quit : ");
		scanf("%d",&choice);
		if(choice == 0)
			break;
	}
	return 0;
}
