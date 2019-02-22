//
//  Problem113.cpp
//  testC
//
//  Created by Sandip Pal on 19/09/12.
//  Copyright (c) 2012 Sandip Pal. All rights reserved.
//

#if 0
#include "Problem113.h"

#define DIGITS  100

void SolveProblem113()
{
    
    unsigned long long bigcnt[100][10], smlcnt[100][10];
    unsigned long long count  = 0;
    
    //Initialize to 0
    for(int i = 0 ; i < 100 ; i++)
    {
        for( int j = 0 ; j < 10 ; j++)
        {
            bigcnt[i][j] = 0;
            smlcnt[i][j] = 0;
        }
    }
    
    
    //initialize bigcnt for the single digit nums
    for(int i = 0; i< 10 ; i++)
    {
        bigcnt[0][i] = 1;
    }
    
    
    for( int j = 1; j < DIGITS ; j++)
    {
        for( int i = 0 ; i < 10 ; i++)
        {
            for( int k  = 0 ; k <=i ; k++ )
            {
                bigcnt[j][i] += bigcnt[j-1][k];
            }
            
        }
    }
    
    for( int j = 0; j < DIGITS ; j++)
    {
        for( int i = 0 ; i < 10 ; i++)
        {
            count = count + bigcnt[j][i];
        }
    }
    printf("Count = %lld\n", count);
    
    
    
    //initialize small cnt
    smlcnt[0][0] = 0;
    for(int i = 1; i< 10 ; i++)
    {
        smlcnt[0][i] = 1;
    }
    
    for( int j = 1; j < DIGITS ; j++)
    {
        for( int i = 0 ; i < 10 ; i++)
        {
            for( int k  = i ; k < 10 ; k++ )
            {
                smlcnt[j][i] += smlcnt[j-1][k];
            }
        }
    }
    
    for( int j = 0; j < DIGITS ; j++)
    {
        for( int i = 1 ; i < 10 ; i++) // Donot take the 0 count
        {
            count = count + smlcnt[j][i];
        }
    }
    printf("Count = %lld\n", count - ((DIGITS)*10)); // subtract the duplicate values like 11, 22, 33 ... 111, 222 ...
    
    

}
#endif
