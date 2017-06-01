//
//  main.c
//  Lottery
//
//  Created by Michael K Montgomery on 4/19/17.
//  Copyright © 2017 Michael Montgomery. All rights reserved.
//

/*
 
The program randomly generates a Lottery of a two-digit number number (from 10 to 99), prompts the user to enter a two-digit number, and determines whether the user wins according to the following rules:

1. If the user matches the lottery in exact order , the awards

is $100,000.

2. If the user input matches the lottery digits, the awards is

$50,000.

3. If one digit in the user input matches a digit in the lottery,

the awards is $30,000.
*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



int main() {
    
    int LotteryNum[2];
    int UserNum[2];
    long t = 0;
    
    // Generate Lottery Number and get User Number
    srand((unsigned) time(&t));
    LotteryNum[0] = rand() % 10;
    LotteryNum[1] = rand() % 10;

    fflush( stdout );
    
    printf("Lottery Number is:  %d%d \n=======\n\n", LotteryNum[0],LotteryNum[1]);
    printf("Enter your number here\n"); scanf("%1d%1d", &UserNum[0], &UserNum[1]);
//    printf("u 1   %d",UserNum[0]);
//    printf("u 2   %d",UserNum[1]);
    

    // Decide if Winner
    if (UserNum == LotteryNum) {
        printf("Winner!  You get ALL 100000\n");
    }
    else if (UserNum == 9999) {
        printf("reversed statement here...\n");
    }
    else {
        printf("Sorry...you lose.\n");
    }
    
    return 0;
}



