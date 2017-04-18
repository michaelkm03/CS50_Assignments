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

// Function that, while index exists in string, puts char to uppercase
void Upper(int i, char string[80]){
    while(string[i]!='\0')
    {
        putchar (toupper(string[i]));
        i++;
    }
}

// Function that, while index exists in string, puts char to lowercase
void Lower(int i, char string[80]){
    while(string[i]!='\0')
    {
        putchar (tolower(string[i]));
        i++;
    }
}

void Inverse(int i, char string[80]){
    while(string[i]!='\0')
    {
        if(string[i] >= 'A' && string[i] <= 'Z') {
            putchar (tolower(string[i]));
        }
        else {
            putchar (toupper(string[i]));
        }
        i++;
    }
}

int main()
{
    printf("Enter Sentence Here:  ");
    scanf("%s", &string);
    printf("Uppercase:  ");
    Upper(0,string);
    printf("\nLowercase:  ");
    Lower(0,string);
    printf("\nInverse:  ");
    Inverse(0,string);
    
    return 0;
}
