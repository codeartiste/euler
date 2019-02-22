//
//  Problem62.cpp
//  testC
//
//  Created by Sandip Pal on 03/03/13.
//  Copyright (c) 2013 Sandip Pal. All rights reserved.
//
#if 0
#include "Problem62.h"



struct numholder
{
    long long key;
    long long smallestNum ;
    int  cnt;
    
};


#define MAX_ELEMENTS 1000000
static numholder ListArr[MAX_ELEMENTS];
static int count = 0;

int  GetElementPos(long long key)
{
    for(int i= 0 ; i < count ; i++ )
    {
        if (key == ListArr[i].key )
            return i;
        
    }
    
    return -1 ;
}

long long MakeKey(long long num)
{
    long long k = num;
    int digits[10];
    long long  retVal = 0;
    for( int i = 0 ; i < 10 ; i++) digits[i] = 0;
    while (k > 0)
    {
        digits[k % 10]++;
        k /= 10;
    }
    
    for (int i = 9; i >= 0; i--) {
        for (int j = 0; j < digits[i]; j++) {
            retVal = retVal * 10 + i;
        }
    }
    
    return retVal;
}


void SolveProblem62()
{
    long long i = 345;
    while (true)
    {
        long long key = MakeKey(i*i*i);
        int pos ;
        if((pos = GetElementPos(key)) == -1)
        {
            ListArr[count].key = key;
            ListArr[count].smallestNum = i*i*i;
            ListArr[count].cnt = 1 ;
            count ++;
        }
        else
        {
            ListArr[pos].cnt++ ;
            if(ListArr[pos].cnt == 5)
            {
                printf("num = %lld\n", ListArr[pos].smallestNum);
                break;
            }
        }
        
        i++;
        
    }
    
    
}

#endif
