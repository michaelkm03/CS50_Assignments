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

int dice1[] = {1,2,3,4,5,6};
int dice2[] = {1,2,3,4,5,6};
int sum, roll1, roll2, points;

int main() {
    
    srand(time(NULL));
    roll1 = dice1[rand() % 6];
    roll2 = dice2[rand() % 6];
    
    printf("%d", roll1);
    printf("%d", roll2);
    
    return 0;
}
