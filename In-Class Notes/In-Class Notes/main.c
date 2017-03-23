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

int main (){
    int i = 5, a = 20;
    
    printf("Before i:  %d\n", i);
    printf("Before a:  %d\n", a);
    a = i++;
    printf("After i:  %d\n", i);
    printf("After a:  %d\n", a);

    
    return 0;
}



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
//    int sum = 0;=
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
//

