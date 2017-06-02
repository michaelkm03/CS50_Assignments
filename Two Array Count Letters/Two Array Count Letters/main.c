//
//  main.c
//  Two Array Count Letters
//
//  Created by Michael K Montgomery on 4/18/17.
//  Copyright © 2017 Michael Montgomery. All rights reserved.
//

/*
 
Write a complete program using two arrays, upper and lower which keep the upper and lower alphabet respectively.

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

char Upper[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char Lower[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char UserInputString[512];
int i = 0, count[26] = {0};

int main() {
    
    
        printf("===== Enter string here =====\n");
        scanf(" %[^\n]s",&UserInputString);
        printf("=============================\n");
//        printf("Length of string is %d \n",strlen(UserInputString));
    
    
    while (UserInputString[i] != '\0')
    {
        /** Considering characters from 'a' to 'z' only
         and ignoring others */
        
        if (UserInputString[i] >= 'a' && UserInputString[i] <= 'z'){
            count[UserInputString[i]-'a']++;
            printf(" %c", count[UserInputString[i]-'a']++);
        }
        else if (UserInputString[i] >= 'A' && UserInputString[i] <= 'Z'){
            count[UserInputString[i]-'A']++;
            printf(" %c", count[UserInputString[i]-'A']++);
        }
        i++;
    }
    for (int j = 0; j < 26; j++)
    {
        /** Printing only those characters
         whose count is at least 1 */
        
        if (count[j] != 0)
            printf(" %c : %d\n",j+'a',count[j]);
    }

//
//    for (i = 0; i <= strlen(UserInputString); i++){
//        //printf("at index %d is the value %c\n\n", i, UserInputString[i]);
//        for (int j = 0; j <= 25; j++){
//            if (UserInputString[i] = Upper[j]){
//                printf("Found it");
//            }
//        }
//    }
    return 0;
}
