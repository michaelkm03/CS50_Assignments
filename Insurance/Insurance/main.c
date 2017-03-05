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

float base = 1000.00;
int age = 0;
float total;

//int DeterminePrice(int age, int base) {
//    if (age >= 16 && age <=19 ){
//        total = base + (base * 0.15); printf("Insurance Price:  $%.2f%\n", total);}
//    else if (age >= 20 && age <=25 ){
//        total = base + (base * 0.05); printf("Insurance Price:  $%.2f%\n", total);}
//    else if (age > 25 ){
//        total = base + (base * 0.10); printf("Insurance Price:  $%.2f%\n", total);}
//    else
//
//    return (0);
//}

int main() {
    printf("How old are you?  ");
    scanf("%d", &age);
    if (age < 16 )
        return (printf("Out of Range...Too Young\n"));
    else
        printf("[===================== CUSTOMER INFORMATION =====================]\n");
        if (age >= 16 && age <=19 ){
            total = base + (base * 0.15); printf("Age:  %d%\nInsurance Price:  $%.2f%\nSex:  Who knows...\n",age, total);}
        else if (age >= 20 && age <=25 ){
            total = base + (base * 0.05); printf("Age:  %d%\nInsurance Price:  $%.2f%\nSex:  Who knows...\n",age, total);}
        else {
            total = base + (base * 0.10); printf("Age:  %d%\nInsurance Price:  $%.2f%\nSex:  Who knows...\n",age, total);}
    return 0;
}


