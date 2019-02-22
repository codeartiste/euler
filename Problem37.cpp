//
//  Problem37.cpp
//  testC
//
//  Created by Sandip Pal on 09/09/12.
//  Copyright (c) 2012 Sandip Pal. All rights reserved.
//

#if 0
#include "Problem37.h"
#include <string.h>
#include <math.h>
#define SEIVE_LENGTH 10000000 

static bool PrimeSeive[SEIVE_LENGTH];

static void MakeSeive()
{
    memset(PrimeSeive, 0, SEIVE_LENGTH);
    
    PrimeSeive[1] = true;
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

void SolveProblem37()
{
    long long sum = 0;
    MakeSeive();
    
    for(long long i = 10; i < SEIVE_LENGTH ; i++ )
    {
        bool istruncable = true;

        if(PrimeSeive[i] == false)
        {
            long long j ;
            long long k = 0;
            long long p10 = 1;
            j = i;
            k = k + (j%10) * p10 ;
            j = j/10;
            p10 = p10*10;
            
            //testing right-truncate is easy
            while(j > 0)
            {
                if(PrimeSeive[j] == true  || PrimeSeive[k] == true)
                {
                    istruncable = false;
                    break;
                }
                k = k + (j%10) * p10 ;
                j = j/10;
                p10 = p10*10;
            }
            if(istruncable == true)
            {
                printf("Num = %lld\n", i);
                sum += i;
            }
   
            
        }
        
    }
    printf("Sum = %lld\n", sum);
    
}
#endif
