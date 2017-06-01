//
//  main.c
//  Play Lottery
//
//  Created by Michael Montgomery on 5/31/17.
//  Copyright © 2017 Michael Montgomery. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int lotteryNumber = 65;
int digits[2];
int userInput, first;
int r = 10;

int main() {
    
    while (r >=10 && r <= 99)
    {
        srand(time(NULL));
        r = rand() % 100;
    }
    printf("%d",r);
    
    printf("Enter your number:  ");
    scanf("%d", &userInput);
    
    first = userInput;
    while(first >= 10)
    {
        first = first / 10;
    }
    
    digits[0] = first;
    digits[1] = userInput % 10;
//    printf("Digit 1:  %d", first);
//    printf("Digit 2:  %d", digits[1]);
    
    if (lotteryNumber == userInput){
        printf("YOU WIN $100,000!!!\n\n");
    }
    
//    else if (digits[0] == lotteryNumber[0]){
//        printf("one digit");
//    }
    
    else {
        printf("YOU LOSE!\n");
    }
    
    return 0;
}
