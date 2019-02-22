//
//  Problem187.cpp
//  testC
//
//  Created by Sandip Pal on 16/02/13.
//  Copyright (c) 2013 Sandip Pal. All rights reserved.
//
#if 0
#include "Problem187.h"


#define MAX_NUM 100000000ll
struct NumHolder
{

    bool isPrime;
    char divCheckCount; // to save memory
};

static struct NumHolder nums[MAX_NUM];

void SolveProblem187()
{
    long long i, j, k;
    long long  count = 0;
    for(i = 1; i < MAX_NUM; i++ )
    {
        nums[i].isPrime = true;
        nums[i].divCheckCount = 0;
    }
    
    for(i = 2; i < MAX_NUM; i++ )
    {
        if(nums[i].isPrime == true)
        {
            nums[i].divCheckCount = 1;
            for(j = 2*i; j < MAX_NUM; j= j + i )
            {
                if(nums[j].divCheckCount <= 2)
                {
                    nums[j].isPrime = false;
                    nums[j].divCheckCount++ ;
                
                    // now check for power of the factor
                    k = j/i ;
                    while (k>0)
                    {
                        if(k% i == 0)
                        {
                            nums[j].divCheckCount++;
                            k = k/i;
                        }
                        else
                        {
                            break;
                        }
                    }
                }
            
            }
        }
        else // it is composite, so check if divisors are 2 or not
        {
            if(nums[i].divCheckCount == 2) count++;
        }
    }
    
    printf("Count =  %lld\n", count);
    
}
#endif
