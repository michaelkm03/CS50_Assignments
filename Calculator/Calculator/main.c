//
//  main.c
//  Calculator
//
//  Created by Michael Montgomery on 5/31/17.
//  Copyright © 2017 Michael Montgomery. All rights reserved.
//

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

double result = 0.0;
char userInput[12];
char operator;
float num;

int addNums(double result, char operator, float num){
    result = result + num;
    return result;
}

int subNums(double result, char operator, float num){
    result = result - num;
    return result;
}

int mulNums(double result, char operator, float num){
    result = result * num;
    return result;
}

int divNums(double result, char operator, float num){
    result = result / num;
    return result;
}

int main() {

    printf("===== Enter calculation =====\n");
    scanf(" %[^\n]s",&userInput);
    printf("=============================\n");
    
    operator = userInput[0];
    sscanf(userInput, " %.2f", &num);
    
    while (operator != 'r' || operator != 'R') {
        if (operator == '+'){
            int addNums(double result, char operator, float num);
            printf("%lf", result);
        }
        else if (operator == '-'){
            int subNums(double result, char operator, float num);
            printf("%lf", result);
        }
        else if (operator == '*'){
            int mulNums(double result, char operator, float num);
            printf("%lf", result);
        }
        else if (operator == '/'){
            int divNums(double result, char operator, float num);
            printf("%lf", result);
        }
        else {
            printf("Something went wrong...");
        }
    }
    
    return 0;
}
