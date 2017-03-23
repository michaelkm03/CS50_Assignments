//
//  main.c
//  Insurance
//
//  Created by Michael K Montgomery on 3/5/17.
//  Copyright © 2017 Michael Montgomery. All rights reserved.
//

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


/*You are to write a program for small insurance company.
The program is supposed to determine the cost of automobile insurance premium for each family member, based on their ages.
The basic insurance price is $1,000 per year per person plus an additional amount based on age, per the table below.*/


float base = 1000.00;
int age = 0,total;
int count;
char n;

int DeterminePrice(int age, int base) {
    if (age >= 16 && age <=19 ){
        total = base + (base * 0.15); printf("Age:  %d\nInsurance Price:  $%d\n", age, total);}
    else if (age >= 20 && age <=25 ){
        total = base + (base * 0.05); printf("Age:  %d\nInsurance Price:  $%d\n", age, total);}
    else {
        total = base + (base * 0.10); printf("Age:  %d\nInsurance Price:  $%d\n", age, total);}
    return (0);
}

int main() {
    printf("How old are you?  "); scanf("%d", &age);
    if (age < 16)
        return (printf("Out of Range...\n"));
    else{
        printf("[===================== CUSTOMER INFORMATION =====================]\n");
        DeterminePrice(age, base);
        printf("[================================================================]\n");
        
    return 0;}
}


