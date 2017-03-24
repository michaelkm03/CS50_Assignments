//
//  main.c
//  UpperAndLowerCase
//
//  Created by Michael K Montgomery on 3/23/17.
//  Copyright © 2017 Michael Montgomery. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>


/*
 
 Write a complete program for the following:
- Ask user to enter sentence
- Convert the sentence to all capital letters and print
- Convert the sentence to all lower case letters and print
- Convert the each character if it is upper to lower and vice versa.
*/

char string[80];
int i = 0;

void Upper(char string[80]){
    while(string[i])
    {
        putchar (toupper(string[i]));
        i++;
    }
}
void Lower(char string[80]){
    while(string[i])
    {
        putchar (toupper(string[i]));
        i++;
    }
}
int main()
{
    printf("Enter Sentence Here:  ");
    scanf("%s", &string);
    Upper(string);
    Lower(string);
    
    return 0;
}
