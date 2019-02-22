//
//  Problem355.cpp
//  testC
//
//  Created by Sandip Pal on 23/09/12.
//  Copyright (c) 2012 Sandip Pal. All rights reserved.
//
#if 0
#include "Problem355.h"

static unsigned long long HCF(unsigned long long num1, unsigned long long num2)
{
    unsigned long long temp;
    if(num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    while(num1 > 1)
    {
        temp = num2 % num1;
        if(temp == 0) break;
        num2 = num1;
        num1 = temp;
    }
    return num1;
    
}

#define MAX_NUM_355  100



void SolveProblem355()
{
    int numArr[MAX_NUM_355 +1];
    int *temparr[MAX_NUM_355];

    int tempcount = 0;
    int count = 0 ;
    unsigned long long sum = 0;
    
    for( int i = 1 ; i <= MAX_NUM_355 ; i++ )
    {
        sum = 0;
        tempcount = 0;
        for(int j = 0; j < count ; j++)
        {
            if(numArr[j] != 0)
            {
                if(HCF(numArr[j],i) != 1 )
                {
                    printf("Debug: %d,  %d\n",numArr[j], i );
                    sum+= numArr[j];
                    temparr[tempcount] = numArr + j;
                    tempcount++ ;
                }
            }
        }
        printf("SUM = %lld\n", sum);
        if(sum < i)
        {
            for( int l = 0 ; l < tempcount ; l++)
            {
                *temparr[l] = 0 ;
            }
            numArr[count] = i;
            count ++;
        }
        
        
    }
    
    sum = 0;
    for(int j = 0; j < count ; j++)
    {
        sum+= numArr[j];
        printf("%d  ", numArr[j]);
    }
    printf("\n");
    
    printf("Sum = %lld\n", sum);
       
}
#endif
