#include<stdio.h>

#include <stdlib.h> 

#include <time.h> 

int main()
{
	int choice, num, random;
	char c[10];//the input of the user
	int max = 10;
	do
	{
		printf("Welcome to the Guessing Game.\n");
		printf("Enter 1 to play game.\nEnter 2 to change max number.\nEnter 3 to quit.\n");
		scanf("%d", &choice);
		switch (choice)
		{
			case 1://if user selects 1
				printf("Select your guess\n");
				scanf("%s", c);//user guess
				num = atoi(c);//covert guess to int

				if(num >=1 && num <= max)
				{
					
				}
				else 
				{
					printf("Please enter a number between 1 and %d\n",max);//if guess is out of bounds
				}
				srand(time(0));
				random = rand() % max + 1;//random number from 1 to max
				
				while(random != num)
				{
					
					if(c[0] == 'q')//exit from game
					{
						break;
					}
					else if(random<num)//if guess us too high
					{
						printf("Your guess was too high, try again.\n");
						scanf("%s", c);
						num = atoi(c);
						if(num >=1 && num <= max)
						{
					
						}
						else 
						{
							printf("Please enter a number between 1 and %d\n",max);
						}
					}
					else if(random>num)//if guess is too low
					{
						printf("Your guess was too low, try again.\n");
						scanf("%s", c);
						num = atoi(c);	
						if(num >=1 && num <= max)
						{
							
						}
						else 
						{
							printf("Please enter a number between 1 and %d\n",max);
						}
					}
				}
				printf("You got it!\n\n");//if guess is correct 
				break;

			case 2 ://option 2 to change the max value of the random bumber
				printf("Enter the max value: ");
				scanf("%d", &max);
				break;
			
			case 3 ://option 3 to exit the game
				printf("Thank you for playing the Guessing Game.");
				break;
		}

	} while(choice < 3);//exit the game
	return 0;
}