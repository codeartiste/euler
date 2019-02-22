//
//  Problem76.cpp
//  testC
//
//  Created by Sandip Pal on 16/03/13.
//  Copyright (c) 2013 Sandip Pal. All rights reserved.
//

#if 0
#include "Problem76.h"

#define MAX_N  101
static int numWays[MAX_N][MAX_N];

void SolveProblem76()
{
    //dynamic prog initial values
    for( int j = 0; j < MAX_N; j++)
    {
        numWays[0][j] = 1;  // 0 can be expressed as the NULL set, thus 1
    }
    for( int i = 1; i < MAX_N; i++)
    {
        numWays[i][0] = 0;  // N can never be expressed by adding " no " integers
    }
    
    for( int i = 1; i < MAX_N; i++)
    {
        for( int j = 1; j < MAX_N; j++)
        {
            if(i-j < 0)
            {
                numWays[i][j] = numWays[i][j-1] ;
            }
            else
            {
                numWays[i][j] = numWays[i][j-1] + numWays[i-j][j];
            }
        }

    }
    
    printf("Num ways %d\n", numWays[100][100] - 1); // Deduct 1 as the number should not be represented as the same number
}

#endif
