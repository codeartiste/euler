//
//  Problems.cpp
//  testC
//
//  Created by Sandip Pal on 16/08/12.
//  Copyright (c) 2012 Sandip Pal. All rights reserved.
//


#include <stdio.h>


#define LENGTHARR  1000000
bool arr[LENGTHARR];

void initializeArr()
{
    for(int i = 0 ; i < LENGTHARR ; i++)
    {
        arr[i] = false;
    }
}
int hashfunc( long j)
{
    long p;
    p = j % 1000003; // took a prime just greater than 1000000
    if(arr[p] == true)
    {
        return 0;
    }
    else
    {
        
        arr[p] = true;
        
    }
    return 1;
    
    
}

int Problem44()
{
    long t = 1, u = 1;
    long p = 1, h = 1;
    
    
    for(int i = 1; i< 10000; i++)
    {
        initializeArr();
        
        while( p < 1000000 )
        {
            p = p + 3*t + 1;
            
            if( hashfunc(p) == 0)
                printf("clash at p-tagon P%ld  %ld\n", t+1, p); // this will never be encountered
            t++;
        }
        
        while( h < 1000000   )
        {
            h = h + 4*u + 1;
            
            if( hashfunc(h) == 0)
                printf("clash at hexagon H%ld  %ld\n", u+1, h);
            u++;
        }
        p = p - 1000000;
        h = h - 1000000;
    }
    return 1;
    

}
