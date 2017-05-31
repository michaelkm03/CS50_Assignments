//
//  main.c
//  Calculator
//
//  Created by Michael Montgomery on 5/31/17.
//  Copyright © 2017 Michael Montgomery. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>

char '+', '-', '*', '/';
double result = 0.0;
double userOperand;

int addNums(double result, int userOperand){
    result = result + userOperand;
    return result;
}

int subNums(double result, int userOperand){
    result = result - userOperand;
    return result;
}

int mulNums(double result, int userOperand){
    result = result * userOperand;
    return result;
}

int divNums(double result, int userOperand){
    result = result / userOperand;
    return result;
}

int main(int argc, const char * argv[]) {

    
    
    return 0;
}
