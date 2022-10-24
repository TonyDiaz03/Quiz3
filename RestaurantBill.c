#include<stdio.h>
#include <stdlib.h>
#include <time.h> 

int main()
{
	//generate random meal
	
	double cost;
	int selection;
	char *meal[4] = {"Salad", "Soup", "Sandwich", "Pizza"};
	srand(time(0));
	selection = rand() % 4;
	switch (selection)
	{
		case 0:
			cost = 9.95;
			break;
		case 1:
			cost = 4.55;
			break;
		case 2:
			cost = 13.25;
			break;
		case 3:
			cost = 22.35;
			break;
	}



	//create variables for the total, tax, tip
	double tax, tip, total;

	//ask user for the meal cost, tax percentage and tip percantage

	printf("Meal: %s\n",meal[selection]);

	printf("Enter the tax percentage: ");
	scanf("%lf", &tax);

	printf("Enter the tip percentage: ");
	scanf("%lf", &tip);

	printf("\nRestaurant Bill Amount\n");
	printf("Meal Amount: %.2lf\n",cost);
	printf("Tax Amount: %.2lf\n",(tax/100)*cost);
	printf("Tip Amount: %.2lf\n",(tip/100)*cost);


	//do calculations for the total amount
	total = cost + ((tax/100)*cost) + ((tip/100)*cost);
	printf("Total Amount: $%.2lf", total);
	

	//print out total amount for meal
	return 0;
}