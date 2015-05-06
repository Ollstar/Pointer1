//
//  main.c
//  pointer1
//
//  Created by Oliver Andrews on 2015-05-06.
//  Copyright (c) 2015 Oliver Andrews. All rights reserved.
//


//Create 3 int variables. Give them names of a, b, and c, and values of 13, 5, and 10.
//
//Now, create four int pointers. Assign the address of a to the first one, b to the second one, and c to the remaining two.
//
//Everything past this point, you have to do using the pointer variables.
//
//Double the value of a.
//
//Increment c.
//
//Set one of the c pointers to point to the same address as the b pointer.
//
//Add four to b using that pointer you just set the address of.
//
//Finally, print out the value in each of the variables. a should be 26, b should be 9, and c should be 11.

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int a = 13;
    int b = 5;
    int c = 10;
    int *d = &a;
    int *e = &b;
    int *f = &c;
    int *g = &c;
    
    *d = *d * 2;
    (*f)++;
    g = e;
    *g = *g + 4;
    
    
    printf("%d %d %d %d %d %d %d", a, b, c, *d, *e, *f, *g);
    
    return 0;
}
