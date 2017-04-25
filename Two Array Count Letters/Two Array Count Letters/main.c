//
//  main.c
//  Two Array Count Letters
//
//  Created by Michael K Montgomery on 4/18/17.
//  Copyright © 2017 Michael Montgomery. All rights reserved.
//

/*
 
Write a complete program using two arrays, upper and lower.  Keep the upper and lower alphabet respectively.

Ask the user to enter string example:

"This is a test from Jupiter. Soon you will see who is from Jupiter!!! May be Dr. D."

Your program should parse the string and keep track of number of alphabet. Both arrays are indexed from 0 to 25. The logical way to do this is to use upper[0] to
count the number of ‘A’, and upper[1] to count number of ‘B’ and so on.

Output should look like:

A: 0 a:2

B: 0 b:1

*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char Upper[] = {'A','B'};
char Lower[] = {'a','b'};
char UserInputString[512];
int i = 0;

int main() {

    printf("===== Enter string here =====\n");
    scanf("%s", UserInputString);
    printf("=============================\n");
    printf("Length of string is %d \n",strlen(UserInputString));
//
//    for(i = 0; UserInputString[i] != "\0"; i++)
//    {
//        printf("Length of String:  %d", i);
//    }
    
    return 0;
}
