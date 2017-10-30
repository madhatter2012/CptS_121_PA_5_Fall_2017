#pragma once

#ifndef Yahtzee_H
#define Yahtzee_H
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // for printf and scanf
#include <stdlib.h> //for standard library
#include <math.h> //for math calculations
#include <time.h> //for random num gen

//srand(time(NULL));
//#define SIZE 144
//declaring Variables because I'm big! I'm hot!

void display_title(FILE *infile);
//(1) (5 pts) Print a game menu for Yahtzee with the following options :
//1. Print game rules
//2. Start a game of Yahtzee
//3. Exit
display_menu(void);

//(3) (10 pts) If option 1 is entered, then print the game rules stated above and repeat step(1)
void display_rules(void);

//otherwise if option 2 is entered, then continue on to step(4); player 1 starts the game
//(4) (5 pts) Ask the player to hit any key to continue on to roll the five dice
//I'll store the player arrays, number of rolls and rolls here
//I'll pass a player turn number parameter into dice_roll fromm here as well.
void play_game(void);

//(5) (5 pts) Roll the five dice and display the face values of each die; enumerate each die with
//a number 1 - 5; add 1 to the total number of rolls for this round
int roll_dice(void);
int display_combo_choice(void);
int roll_again(int a, int b, int c, int d, int e, int f);




//(6) (10 pts) If the total number of rolls for this round is less than three,
//then ask the player(Y / N) if he / she wants to use the roll for one of the game combinations
//otherwise a combination must be selected.
//1. Sum of 1's        
//2. Sum of 2's        
//3. Sum of 3's        
//4. Sum of 4's        
//5. Sum of 5's        
//6. Sum of 6's        
//7. Three-of-a-kind
//8. Four-of-a-kind
//9. Full house
//10. Small straight
//11. Large straight
//12. Yahtzee
//13. Chance
//(7) (15 pts) If the number of rolls is three or "yes" is entered, then save the combination and it may not be selected again in the future
//(Note: The selection of the combination must be verified.If the user selects full house, but does not have one, then your
//	must assign 0 points for the combination);
//continue on to step(8); clear the screen
//otherwise if "no" is entered, ask the user which dice to re - roll(1 - 5); re - roll the selected die or dice; clear the screen;
//repeat step(6)
//otherwise repeat step(6)
//(8) (5 pts) Alternate players
//(9) (10 pts) If each player has rolled for the round, then increment the round number
//if the round number is equal to 14, then continue on to step(10)
//otherwise repeat step(4)
//otherwise repeat step(4)
//(10) (5 pts) If the total score in the upper section is greater than or equal to 63 for a player, then add 35 points to the total score
//(11) (5 pts) Print the scores for both players and print the winner
//(12) (5 pts) Repeat step(1)









#endif 