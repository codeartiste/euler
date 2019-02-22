//
//  Problem44.cpp
//  testC
//
//  Created by Sandip Pal on 12/09/12.
//  Copyright (c) 2012 Sandip Pal. All rights reserved.
//

#if 0
#include "Problem44.h"
#include <string.h>
#include <math.h>
#define PENTA_SEIVE_LENGTH 10000000000LL

static bool PentaSeive[PENTA_SEIVE_LENGTH + 1];

static void MakePentaSeive()
{
    long long i = 1, pent = 1;
    long long diff = 0;
    memset(PentaSeive, 0, PENTA_SEIVE_LENGTH + 1);
    
    
    while(pent < PENTA_SEIVE_LENGTH + 1)
    {
        PentaSeive[pent] = true;
        i++;
        diff = 3*i - 2 ;
        pent+= diff ;
        
    }
}

void SolveProblem44()
{
    long long sum = 0;
    MakePentaSeive();
    for(long long i = 1 ; i < 10000 ; i++)
    {
        long long p1, p2;
        p1 = i*(3*i-1)/2;
        if(2*p1 > PENTA_SEIVE_LENGTH) break;
        for(long long j = 1 ; j < i ; j++)
        {
            p2 = j*(3*j-1)/2;
            if((PentaSeive[p1- p2] == true) && (PentaSeive[p1+ p2] == true) )
            {
                printf("i =%lld    j =%lld    %lld  \n", i, j, p1-p2);
            }
            
            
        }
    }
    
    
}

#endif
    
