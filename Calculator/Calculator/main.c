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
char userOperator[16];

int addNums(double result, char userOperand){
    result = result + userOperand;
    return result;
}

int subNums(double result, char userOperand){
    result = result - userOperand;
    return result;
}

int mulNums(double result, char userOperand){
    result = result * userOperand;
    return result;
}

int divNums(double result, char userOperand){
    result = result / userOperand;
    return result;
}

int main(int argc, const char * argv[]) {

    printf("==========================\n\n");
    printf("Enter calculation:  ");
    scanf("%c", &userOperator);
    printf("index 0 %c", userOperator[2]);
    
    return 0;
}
