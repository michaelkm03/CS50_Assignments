//
//  main.c
//  Calculator
//
//  Created by Michael Montgomery on 5/31/17.
//  Copyright © 2017 Michael Montgomery. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>

double result = 0.0;
char* userInput[12];

int addNums(double result, char userInput){
    result = result + userInput;
    return result;
}

int subNums(double result, char userInput){
    result = result - userInput;
    return result;
}

int mulNums(double result, char userInput){
    result = result * userInput;
    return result;
}

int divNums(double result, char userInput){
    result = result / userInput;
    return result;
}

int main() {

    printf("==========================\n\n");
    printf("Enter calculation:");
    scanf(" %c", *userInput);
    
    return 0;
}
