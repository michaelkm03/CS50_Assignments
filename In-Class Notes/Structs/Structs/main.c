//
//  main.c
//  Structs
//
//  Created by Michael K Montgomery on 3/8/17.
//  Copyright © 2017 Michael Montgomery. All rights reserved.
//
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct Person {
    const char name;
    const char hair_color;
    int age;
    int height;
    //char fav_food[3];
    
};

void getInfo(struct Person ThePerson){
    
    printf("\n");
    
    printf("Name:  %s", ThePerson.name);
    printf("Hair:  %s", ThePerson.hair_color);
    printf("Age:  %s", ThePerson.age);
    printf("Height:  %s", ThePerson.height);
}

void main(){
    struct Person Michael = {"Michael", "Black", "28", "72"};
    
    getInfo(Michael);
}
