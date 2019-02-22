//
//  Problem58.cpp
//  testC
//
//  Created by Sandip Pal on 04/09/12.
//  Copyright (c) 2012 Sandip Pal. All rights reserved.
//
#if 0

#include <string.h>
#include <math.h>
#include "Problem58.h"
#define SEIVE_LENGTH 1000000000ll

bool PrimeSeive[SEIVE_LENGTH];

void MakeSeive()
{
    memset(PrimeSeive, 0, SEIVE_LENGTH);
    
    for (long long i = 2 ; i < SEIVE_LENGTH ; i++)
    {
        if(PrimeSeive[i] == true)
        {
            continue;
        }
        else
        {
            for(long long j = 2*i; j < SEIVE_LENGTH ; j+= i)
            {
                PrimeSeive[j] = true;
            }
            
        }
    }
}
bool checkPrime(long long num)
{
    for(long long k = 2; k <= sqrt(num) ; k++)
    {
        if(num% k == 0) return false ;
    }
    return true;
}


void SolveProblem58()
{
    
    int i = 1, prims, nonprims;
    long long a[4];
    int inc[4];
    time_t t1,t2;
    (void) time(&t1);
    prims = 0;
    nonprims = 1;
    //MakeSeive();
    a[0] = 3;
    a[1] = 5;
    a[2] = 7;
    a[3] = 9;
    inc[0] = 2;
    inc[1] = 4;
    inc[2] = 6;
    inc[3] = 8;
    
    while(true)
    {
        for(int j = 0; j < 4; j++)
        {
            if(checkPrime(a[j]) == true)
            {
                prims++;
            }
            inc[j]+= 8;
            a[j]+= inc[j];
        }
        i+= 2;
        if ((prims*100)/(2*i+1) < 10)
        {
            printf("i = %d\n", i);
            break;
        }
        
        
    }
    
    
    (void) time(&t2);
    printf("Time to solve %ld secs\n", (int) t2-t1);
   
    
    
    
}
#endif
