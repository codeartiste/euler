//
//  Problem47.cpp
//  testC
//
//  Created by Sandip Pal on 09/09/12.
//  Copyright (c) 2012 Sandip Pal. All rights reserved.
//

#include "Problem47.h"
#include <string.h>
#include <math.h>
#define SEIVE_LENGTH 10000000

static unsigned int PrimeSeive[SEIVE_LENGTH];

static void MakeSeiveFactor()
{
    memset(PrimeSeive, 0, SEIVE_LENGTH);
    
    PrimeSeive[1] = 1;
    for (long long i = 2 ; i < SEIVE_LENGTH ; i++)
    {
        if(PrimeSeive[i] != 0)
        {
            continue;
        }
        else
        {
            for(long long j = 2*i; j < SEIVE_LENGTH ; j+= i)
            {
                PrimeSeive[j]++;
            }
            
        }
    }
}

void SolveProblem47()
{
    int count = 0;
    MakeSeiveFactor();
    for(long long i = 600; i< SEIVE_LENGTH ; i++)
    {
        if(PrimeSeive[i] >= 4)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        
        if( count == 4)
        {
            printf("%lld  %lld  %lld  %lld\n", i-3, i-2, i-1, i );
            break;
        }
    }
    
    
}
