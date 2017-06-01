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


int LotteryNum[2];
int UserNum[2];
long t = 0;


int main() {
    
    // Generate Lottery Number and get User Number
    srand((unsigned) time(&t));
    LotteryNum[0] = rand() % 10;
    LotteryNum[1] = rand() % 10;
    
    fflush( stdout );
    
    printf("Lottery Number is:  %d%d \n=======\n\n", LotteryNum[0],LotteryNum[1]);
    printf("Enter your number here\n"); scanf("%1d%1d", &UserNum[0], &UserNum[1]);
    // Decide if Winner
    if (UserNum[0] == LotteryNum[0] && UserNum[1] == LotteryNum[1]) {
        printf("WINNER!  You get ALL 100000\n");
    }
    else if ((UserNum[0] == LotteryNum[0] || UserNum[0] == LotteryNum[1]) && (UserNum[1] == LotteryNum[0] || UserNum[1] == LotteryNum[1])) {
        printf("WINNER but just IN REVERSE!  You get  50000\n");
    }
    else if (UserNum[0] == LotteryNum[0] || UserNum[1] == LotteryNum[1]) {
        printf("Winner but just ONE DIGIT!  You get  50000\n");
    }
    else {
        printf("Sorry...you lose.\n");
    }

    
    return 0;
}



