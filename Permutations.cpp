//
//  Permutations.cpp
//  testC
//
//  Created by Sandip Pal on 18/08/12.
//  Copyright (c) 2012 Sandip Pal. All rights reserved.
//

#include "Permutations.h"
#include <stdio.h>
#include <string.h>



static void swap(int *p1, int *p2)
{   int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}




/* Function to print permutations of string
 This function takes three parameters:
 1. String
 2. Starting index of the string
 3. Ending index of the string. */
void permute(int *a, int i, int n)
{
    int j;
    char str[32];
    if (i == n)
    {
        // the perm is ready
        
        if(((a[0] + a[1] + a[2]) == (a[4] + a[2] + a[3]) ) && ((a[4] + a[2] + a[3]) == (a[4] + a[5] + a[6]))   && ((a[4] + a[5] + a[6]) == (a[6] + a[7] + a[8]))&&      
           ((a[6] + a[7] + a[8]) == (a[1] + a[9] + a[8]))  && ((a[1] + a[9] + a[8]) == (a[0] + a[1] + a[2])))
        {
            sprintf(str, "%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", a[0], a[1], a[2], a[3], a[2], a[4], a[5], a[4], a[6], a[7], a[6], a[8], a[9],a[8], a[1]);
            if(strlen(str) == 16)
            {
                printf("%s\n", str);
            }
        }
    }
    else
    {
        for (j = i; j <= n; j++)
        {
            swap((a+i), (a+j));
            permute(a, i+1, n);
            swap((a+i), (a+j)); //backtrack
        }
    }
}
