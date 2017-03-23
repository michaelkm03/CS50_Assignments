//  Created by Michael K Montgomery on 3/4/17.
//  Copyright © 2017 Michael Montgomery. All rights reserved.
//
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*Write a program that displays a menu as shown in the sample run.
 
 Main menu
 1: Addition
 2: Subtraction
 3: Multiplication
 4: Division
 5: Exit
 
 Enter a choice: 1
 What is 1 + 7?
 
 You can enter 1, 2, 3, or 4 for choosing an addition, subtraction, multiplication, or division test.
 
 After a test is finished, the menu is redisplayed. 
 
 You may choose another test or enter 5 to exit the system. Each test generates two random single-digit numbers to form a question for addition,
 subtraction, multiplication, or division. For a subtraction such as number1 – number2, number1 is greater than or equal to number2.  
 
 For a division question such as number1 / number2, number2 is not zero.

 */

int op,n1,n2,total,ans;
char sym;
int i = 0;

void DecideOp(int op, int n1, int n2) {
    if(op == 1) {
        total = n1 + n2;
        printf("What is %d + %d?  \n", n1, n2); scanf("%d", &ans);
    }
    else if(op == 2) {
        total = n1 - n2;
        printf("What is %d - %d?  \n", n1, n2); scanf("%d", &ans);
    }
    else if(op == 3) {
        total = n1 * n2;
        printf("What is %d x %d?  \n", n1, n2); scanf("%d", &ans);
    }
    else if(op == 4) {
        total = n1 / n2;
        printf("What is %d / %d?  \n", n1, n2); scanf("%d", &ans);
    }
    else {
        printf("GOODBYE!");
    }
}

void Eval(int ans, int total) {
    if (ans == total && op != 5) {
        printf("Correct!\n");}
    else if (op == 5){
        printf("\n\n");
    }
    else {
        printf("Your answer is wrong. The correct answer is %d\n",ans);
    }
}

int main() {
    
    printf("[  %d  ]\n",i);
    printf(" ");
    printf("----- Select an Operation -----\n");
    printf("1: Addition\n");
    printf("2: Subtraction\n");
    printf("3: Mulitiplication\n");
    printf("4: Division\n");
    printf("5: Exit\n");
    printf("-------------------------------\n");

    while (op < 5) {
        printf(">>>  ");
        scanf("%d", &op);
        ans = 0;
        total = 0;
        n1 = rand() % 100;
        n2 = rand() % 100;
        DecideOp(op, n1, n2);
        Eval(total, ans);
        
    };
    return 0;
    
}




