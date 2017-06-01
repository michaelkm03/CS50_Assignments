//
//  main.c
//  Dice Problem
//
//  Created by Michael Montgomery on 6/1/17.
//  Copyright © 2017 Michael Montgomery. All rights reserved.
//

//A player rolls two dice. Each die has six faces. These faces contain 1,2,3,4,5,
//
//and 6 spots. After the dice have come to rest, the sum of the spots on the two
//
//upward faces is calculated. If the sum is 7 or 11 on the first throw, the player
//
//wins. If the sum is 2,3, or 12 on the first throw (called “craps”), the player loses
//
//(i.e., the “house” wins). If the sum is 4,5,6,8,9, or 10 on the first throw, then that
//
//sum becomes the player’s “points.” To win, you must continue rolling the dice
//
//until you “make your points.” The player loses by rolling a 7 before making the
//
//points.

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int sum, roll1, roll2, points;
int playState = 0;

int main() {
    
    srand(time(NULL));
    roll1 = 1 + rand() % 6;
    roll2 = 1 + rand() % 6;
    sum = roll1 + roll2;
    
    printf("Roll 1:  %d\n", roll1);
    printf("Roll 2:  %d\n", roll2);
    
    switch(sum) {
        
        case 12 :
            printf("YOU CRAPPED OUT!  God...you're SUCH A LOSER!\n");
            points = 0;
            break;
            
        case 11 :
            if (points == 0){
                printf("You rolled a %d\n", sum);
                printf("Points:  %d\n", points);
            }
            else {
                printf("You Win!!!\n");
                printf("You rolled a %d\n", sum);
                printf("Points:  %d\n", points);
            }
            break;
            
        case 10  :
            printf("You lose...\n");
            points = sum;
            printf("Points:  %d\n", points);
            break;
            
        case 9  :
            printf("You lose...\n");
            points = sum;
            printf("Points:  %d\n", points);
            break;
            
        case 8  :
            printf("You lose...\n");
            points = sum;
            printf("Points:  %d\n", points);
            break;
            
        case 7  :
            if (points == 0){
                printf("You rolled a %d\n", sum);
                printf("Points:  %d\n", points);
            }
            else {
                printf("You Win!!!\n");
                printf("You rolled a %d\n", sum);
                printf("Points:  %d\n", points);
            }
            break;
            
        case 6  :
            printf("You lose...\n");
            points = sum;
            printf("Points:  %d\n", points);
            break;
            
        case 5  :
            printf("You lose...\n");
            points = sum;
            printf("Points:  %d\n", points);
            break;
            
        case 4  :
            printf("You lose...\n");
            points = sum;
            printf("Points:  %d\n", points);
            break;

        case 3  :
            printf("YOU CRAPPED OUT!  God...you're SUCH A LOSER!\n");
            points = 0;
            break;
            
        case 2  :
            printf("YOU CRAPPED OUT!  God...you're SUCH A LOSER!\n");
            points = 0;
            break;
    }
    
    return 0;
}
