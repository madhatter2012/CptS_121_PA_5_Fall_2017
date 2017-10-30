#include "Yahtzee.h"

void display_title(FILE *infile)
{
	//char print_title[SIZE];
	


	if (infile)
	{
		int i = 0;
		do
		{
			putchar(i);
		} while (i = getc(infile)!=EOF);
	}	

	/*do
	{
		fgets(print_title, sizeof(print_title), infile) != NULL)

		printf("%s")

	}while (!EOF)*/

}

display_menu(void)
{
int choice = 0;

	do	{
		//display_title(infile);
		printf("\nWelcome to Yahtzee!!!\n\n");
		printf("The the exciting game of chance where you roll dice a lot and stuff....\n\n");
		printf("Enter a number below...\n");
		printf("1. Print the Game Rules.\n2. Play game.\n3. Exit game.\n\n");
		
		scanf("%d", &choice); //(2) (5 pts) Get a menu option from the user; clear the screen
		
		if (choice == 1)
			display_rules();
		else if (choice == 2)
			play_game();
		else if (choice == 3)
			printf("If this is Opposite Day, wouldn't it be \"badbye?\"\n\n\n");
	
	}while(choice != 3);

}

void display_rules(void)
	{

	//int columns = 0, rows = 0, 

	printf("\nThe Rules of Yahtzee :\n\n");

	printf("The scorecard used for Yahtzee is composed of two sections. A upper section and a lower section.\n"
		"A total of thirteen boxes or thirteen scoring combinations are divided amongst the sections.\n"
		"The upper section consists of boxes that are scored by summing the value of the dice matching\n"
		"the faces of the box. If a player rolls four 3's, then the score placed in the 3's box is the sum of the dice\n"
		"which is 12. Once a player has chosen to score a box, it may not be changed and the combination is no longer\n"
		"in play for future rounds. If the sum of the scores in the upper section is greater than or equal to\n "
		"63, then 35 more points are added to the players overall score as a bonus.The lower section contains a\n"
		"number of poker like combinations. See the table provided below:\n\n");

	printf("\n1. \Sum of 1's\t7. 3 of a kind\n");
	printf("2. Sum of 2's\t8. 4 of a kind\n");
	printf("3. Sum of 3's\t9. Full house\n");
	printf("4. Sum of 4's\t10. Small Straight\n");
	printf("5. Sum of 5's\t11. Large Straight\n");
	printf("6. Sum of 6's\t12. Yahtzee\n");
	printf("\t13. Chance\n");



	/*for (int rows = 1; rows <= 6; rows++)
	{
		for (int columns = 1; columns <= 4; columns++)
		{
			printf("%d ", columns);
		}

		printf("\n");
	}*/

	}

void play_game(void)
{
	int dice_nums[] = { 0 }, player_num = 1, round_num = 1, roll_num = 1;
	char choice;

	printf("\nStarting game...\n");
	printf("\nPress any key to roll 5 dice!\n");
	getch();

	printf("\n\tPlayer %d\tRound %d\n\n", player_num, round_num);

	for (int i = 0; i < 5; ++i)
	{

		dice_nums[i] = roll_dice();

		printf("\t\tRoll %d = %d\n\n", roll_num, dice_nums[i]);

		roll_num++;
	}

	if (roll_num = 3)//if statement forcining commbo choice
	{
		printf("That's 3 rolls. Your turn is OVER! You must choose one of the following combinations...");

		display_combo_choice();
	}

	else
	{
		printf("Would you like to use this roll for a combination...\n\n");
		printf("Enter Y or N for Yes or No.\n\n");

		scanf(" %c", choice);

		if (choice == 'Y' && 'y')
		{
			display_combo_choice();
		}
		else if (choice == 'N' && 'n')
		{
			roll_again(); //reroll
		}
	}
}

int roll_dice(void)
{

		//srand(time(NULL));
		int dice = 0, dice2 = 0;
	
		dice = rand() % 6 + 1;
		//printf("Inside roll_dice function the random # is: %d and %d", dice, dice2);

		return dice;
}

int display_combo_choice(void)
{
	int choice = 0;

	do {


		printf("\n1. \Sum of 1's\t7. 3 of a kind\n");
		printf("2. Sum of 2's\t8. 4 of a kind\n");
		printf("3. Sum of 3's\t9. Full house\n");
		printf("4. Sum of 4's\t10. Small Straight\n");
		printf("5. Sum of 5's\t11. Large Straight\n");
		printf("6. Sum of 6's\t12. Yahtzee\n");
		printf("\t13. Chance\n\n");

		printf("Choose a combination. Type the number of your choice...");

		scanf(" %c", choice);

	} while (choice < 1 && choice > 13);

}

int roll_again(int a, int b, int c, int d, int e, int f)
{
	printf("Which dice would you like to reroll?");
	printf("Type to choose that dice")
}











