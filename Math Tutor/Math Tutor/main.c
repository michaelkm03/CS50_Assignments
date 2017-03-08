//  Created by Michael K Montgomery on 3/4/17.
//  Copyright © 2017 Michael Montgomery. All rights reserved.
//
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int op,n1,n2,total,i,ans,r;
char sym;
i = 0;

void Eval(int total, int ans) {
    if (ans == total) {
        printf("Correct!\n");}
    else {
        printf("Nope...ya DUMBASS!\n");
    }
}

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
    else printf("Please enter valid selection.\n");
}


int main() {
    
    printf("How many rounds would you like to go?  ");
    scanf("%d", &r);
    printf("##################\n");
    printf("ROUNDS:  %d\n", r);
    printf("##################\n");
    
    while (i++ <= (r - 1)) {
        ans == 0;
        total = 0;
        printf("[  %d  ]\n",i);
        printf(" ");
        printf("----- Select an Operation -----\n");
        printf("1: Addition\n");
        printf("2: Subtraction\n");
        printf("3: Mulitiplication\n");
        printf("4: Division\n");
        printf("-------------------------------\n");
        printf(">>>  ");
        scanf("%d", &op);
        
        n1 = rand() % 10;
        n2 = rand() % 10;
        Eval(int total, <#int ans#>);
        DecideOp(int op, <#int n1#>, <#int n2#>);
    }
}
