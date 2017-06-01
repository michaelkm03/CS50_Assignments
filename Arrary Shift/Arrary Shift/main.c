//
//  main.c
//  Arrary Shift
//
//  Created by Michael K Montgomery on 3/5/17.
//  Copyright © 2017 Michael Montgomery. All rights reserved.
//

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int originalArray[100], newArray[100],temp [100];
int size, i, shiftAmount;
char shiftDirection;
long t = 0;


int main() {
    
    srand((unsigned) time(&t));
    printf("How many elements?  ");
    scanf(" %d", &(size));
    printf("### There are %d elements in this array ### \n\n", size);
    
    // Add random ints to array
    for (i = 0; i < size; i++){
        originalArray[i] = 1 + rand() % 100;
    }
    fflush( stdout );

    printf("|==================== Your Array ====================|\n\n");
    for (int i = 0; i < size; i++){
        printf(" |%d| ",originalArray[i]);
    }
    
    printf("\n\n| =============== Which Direction? ============= |\n\n");
    printf("L :  Left\nR :  Right\n\n>>>  ");
    scanf(" %c", &shiftDirection);
    printf("| =================== How Many? ==================== |\n\n\>>>  ");
    scanf("%d", &shiftAmount);
    
    // Add amount for shifting
    printf("TEMP --\n");
    for (int i = 0; i < shiftAmount; i++){
        temp[i] = originalArray[i];
        printf(" |%d| ",temp[i]);
    }
    printf("\nARRAY --\n\n");
    
    // Construct new Array after shift
    int j = 0;
    for (int i = shiftAmount; i > 0; i--){
        newArray[i] = temp[j];
        printf(" |%d| ",newArray[i]);
        j++;
    }
    
    return 0;
}
