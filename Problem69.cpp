//
//  Problem69.cpp
//  testC
//
//  Created by Sandip Pal on 15/09/12.
//  Copyright (c) 2012 Sandip Pal. All rights reserved.
//

#include "Problem69.h"


#include <string.h>
#include <math.h>
#define P69_SEIVE_LENGTH (1000000 +1)




static double  *euler;
static bool    *isPrime;


static void P69MakeDivisorSeive()
{
    euler    = (double *) malloc(P69_SEIVE_LENGTH * sizeof(double));
    isPrime  = (bool *) malloc(P69_SEIVE_LENGTH * sizeof(bool));
    //Initialize the sieve
    for (int i = 0 ; i < P69_SEIVE_LENGTH ; i++)
    {
        isPrime[i] = true ;
        euler[i]   = 1.0 ;
        
    }
    
    
    for (int i = 2 ; i < P69_SEIVE_LENGTH ; i++)
    {
        if(isPrime[i] == false)
        {
            continue ;
        }
        else
        {
            euler[i] = (euler[i] * i)/(i-1); // used the Phi(n) formula 
            for(int j = 2*i; j < P69_SEIVE_LENGTH ; j+= i)
            {
                euler[j] = (euler[j] * i)/(i-1);
                isPrime[j] = false ;
                
            }
        }
    }

    
}
void SolveProblem69()
{
    P69MakeDivisorSeive();
    double pval = 0.0;
    int pi = 0;
    for (int i = 2 ; i < P69_SEIVE_LENGTH ; i++)
    {
        
        if(euler[i] > pval)
        {
            pval = euler[i];
            pi   = i;
            
        }
    }
    printf("Highest value of i = %d  and ratio = %f", pi, pval);
}
