//
//  Problem50.cpp
//  testC
//
//  Created by Sandip Pal on 12/09/12.
//  Copyright (c) 2012 Sandip Pal. All rights reserved.
//

#if 0
#include "Problem50.h"
#include <string.h>
#include <math.h>

#define P50_SEIVE_LENGTH 1000000
#define P50_PRIMES_TOTAL  100000

static bool LPrimeSeive[P50_SEIVE_LENGTH];
static long long *Primes;
static long long *PSums;
static long long Num = 0 ;

static void P50MakeSeive()
{
    long long LpPNo , pPNo, diff, Ldiff ;
    Primes = (long long *) malloc(P50_PRIMES_TOTAL * sizeof(long long));
    PSums = (long long *) malloc(P50_PRIMES_TOTAL * sizeof(long long));
    PSums[0] = 0;
   
    memset(LPrimeSeive, 0, P50_SEIVE_LENGTH);
    
    
    for (long long i = 2 ; i < P50_SEIVE_LENGTH ; i++)
    {
        if(LPrimeSeive[i] == true)
        {
            continue;
        }
        else
        {
            Primes[Num] = i;
            if(Num == 0)
                PSums[Num + 1] = i;
            else
               PSums[Num + 1] = PSums[Num] + i ;
            
            Num++;
            for(long long j = 2*i; j < P50_SEIVE_LENGTH ; j+= i)
            {
                LPrimeSeive[j] = true;
            }
            
        }
    }


// Now we will test each sum starting from the largest against all the lower sums starting from lowest
// and check whether the diff is a prime

    Ldiff  = 0;
    for( long long  ii = Num  ; ii > 0 ; ii--)
    {
        
        for(long long jj = 0 ; jj < ii ; jj++)
        {
            pPNo = (PSums[ii] - PSums[jj]) ;
            diff = ii - jj;
            
            if( pPNo < P50_SEIVE_LENGTH)
            {
                if(LPrimeSeive[pPNo] == false)
                {
                    //printf("Prime = %lld  ii =%lld    jj =%lld \n",(pPNo) , ii, jj  );
                    if(diff > Ldiff)
                    {
                        Ldiff = diff;
                        LpPNo = pPNo;
                        //printf("Prime = %lld  ii =%lld    jj =%lld \n",(pPNo) , ii, jj  );
                        
                        // now dont test the rest
                        break;
                    }
                }
            }
        }
    }
    printf("Prime = %lld   \n",LpPNo  );

}



void SolveProblem50()
{
    P50MakeSeive();
    
}
#endif
