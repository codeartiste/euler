//
//  Problem309.cpp
//  testC
//
//  Created by Sandip Pal on 07/11/13.
//  Copyright (c) 2013 Sandip Pal. All rights reserved.
//

#include "Problem309.h"
#include <stdio.h>

static int gcd( int a, int b)
{
    if(a == 0)
        return b;
   
    return gcd(b%a, a);


}


void SolveProblem309()
{
    int m, n ,k;
    int a,b,c;
    
    for(n= 1; n <1001 ; n++)
    {
        for(m = n+1; m <1001 ; m = m+2)
        {
            if(gcd(n, m) == 1)
            {
                a = m*m - n*n;
                b = 2*m*n;
                if(a > b)
                {
                    a = a + b;
                    b = a - b;
                    a = a - b;
                }
                c = m*m + n*n;
                if( c >= 1000000)
                {
                    break;
                }
                else
                {
                    k = 1 ;
                    while(k*c <= 1000000)
                    {
                        printf("(%d  %d  %d)\n", k*a, k*b, k*c);
                        k++;
                    }
                }
            }
        }
        
    }
    
    
    
}
