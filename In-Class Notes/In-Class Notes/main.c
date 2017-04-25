//
//  main.c
//  In-Class Notes
//
//  Created by Michael K Montgomery on 3/7/17.
//  Copyright © 2017 Michael Montgomery. All rights reserved.
//


#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// MARCH 7 2017 //

//int main (){
//    int i = 5, a = 20;
//    
//    printf("Before i:  %d\n", i);
//    printf("Before a:  %d\n", a);
//    a = i++;
//    printf("After i:  %d\n", i);
//    printf("After a:  %d\n", a);
//
//    
//    return 0;
//}
//
//void ShowForStatement(int , int);
//void ShowWhileStatement(void);
//
//int main() {
//    
//    int low, high;
//    printf("Enter Range 8 and 50\n");
//    scanf("%d %d",&low, &high);
//    
//    ShowForStatement(low, high);
//    
//    system("pause");
//    return 0;
//}
//
//void ShowDoWhileStatement(void){
//    int i;
//    int sum = 0;
//    i = 2;
//    
//    do
//        
//        printf("=====>%d\n", i);
//        sum = sum + 1;
//        i = i + 2;
//    }
//}
//
//
//void ShowForStatement(int start, int finish){
//    int i;
//    int sum = 0;
//    
//    // able to use comma operator to use more than 1 argument in first and third section;  conditional can only have one
//    for(i = start; i <= finish; i = i + 2){
//        printf("====>%d\n",i);
//        sum = sum + i;
//    }
//    printf("=========\n");
//    printf("=====>>> %d\n", sum);
//}
//
//void ShowWhileStatement(void){
//    int i;
//    int sum = 0;=
//    i = 2;
//    
//    while(i <= 10){
//        
//        printf("=====>%d\n", i);
//        sum = sum + 1;
//        i = i + 2;
//    }
//}



// April 18
int main()
{
    
//    int a; double b; char ch;
//    int i = 0;
//    
//    // create pointer to location of q
//    double * q;
//    b = 20.75;
//    q = &b;
//    printf("blah q is at location %p\n",&q);
//
//    
//    // location is the address in memory, prints out
//    printf("a is at location %p\n",&a);
//    printf("b is at location %p\n",&b);
//    printf("ch is at location %p\n",&ch);
//    printf("q is at location %p\n",&q);
//
//    // printing variable b is the same as printing the pointer *q (references the same location)
//    printf("====> %.2f\n",b);
//    printf("====> %.2f\n",*q);
//    
//    *q = *q + 100;
//    
//    printf("====> %.2f\n",b);
//    printf("====> %.2f\n",*q);
//    
//    printf("\n --- Do While Loop ---\n");
//    do
//    {
//        i++;
//        printf("Value:  %d\n", i);
//    } while(i < 10);
    
    
    int a,b,c;
    a = 100; b = 20; c= 10;
    
    if ((a > b) && (a > c))
        printf("First If Statment Excecuted\n");
    
    if ((b > c) && (b < a))
        printf("Second If Statment Excecuted\n");
    
    if ((c > b) && (c > a))
        printf("Third If Statment Excecuted\n");
    
    int max;
    max = 0;
    
    if (a > max)
        max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    printf("Max is varibale %d\n", max);
    
    printf("-- MOD --");
    int mod;
    mod = 35 % 60;
    printf("\n%d\n", mod);

    int i;
    
    for (i = 0; i <= 8; i+= 2)
        printf("%d\n", i);
        printf("FINAL %d\n", i); // ONLY EXECUTES ONCE CONDITION MET (i = 8), final
    
    int j = 2;
    for ( ; j < 8; )  //<<< can contain emptys
    {
        j +=3;
        //printf("%d",j);
        
    }
    
    int i1 = 0;
    int j1 = 1;
    
    printf("--- For Loop that shows assignment ---\n");
    for ( ; i1 < 8; )
    {
        i1 += j1; // same as i = i + j
        printf("i1 is %d\n", i1);
        j1*= 2; // same as j = j * 2
        printf("j1 is %d\n ===\n",j1);
        
    }
    
    printf("--- Switch Statements ---\n");


    int var = 8;
    
    switch ( var ) // ( ) must be an integer or character
    {
        
        case 0: var++; break;
        case 2: var++; break;
        case 5: var++; break;
        default: var = 90;
        
    }
    printf("%d\n", var);
    
    int var1;
    
    for (var1 = 1; var1 < 5; var1++)
        switch (i + 1)
    {
        case 2: var1++; break;
        case 3: --var1;
        case 4: --var1;
        default: printf("Default %d\n", var1);
    }
    
    
}








