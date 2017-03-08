//
//  main.c
//  Arrary Shift
//
//  Created by Michael K Montgomery on 3/5/17.
//  Copyright © 2017 Michael Montgomery. All rights reserved.
//

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    float array[] = {1,2,3};
    int i;
    
    // printf("How many elements?  "); scanf("%d", &size)
    
    for( i = 0; i < sizeof(array); ++i) {
        array[i] = "value";
    }
    
    return 0;
}
