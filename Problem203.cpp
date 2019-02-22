//
//  Problem203.cpp
//  testC
//
//  Created by Sandip Pal on 12/09/12.
//  Copyright (c) 2012 Sandip Pal. All rights reserved.
//

#include "Problem203.h"



void SolveProblem203()
{
    unsigned long long bincoeff[51*26 + 1];// n(n+1)/2
    unsigned long long dcoeff[1000];
    unsigned long long sum = 0;
    
    int i, j, n, num = 0;
    int k;
    for(i = 1 ; i < 52 ; i++)
    {
        n= (i*(i-1))/2 ;
        for(j =0 ; j < i ; j++)
        {
            if(j == 0 || j == i-1)
            {
                bincoeff[n+j] = 1 ;
            }
            else
            {
                bincoeff[n+j] = bincoeff[n -i +1 + j] + bincoeff[n -i + j];
            }
            for(k = 0; k< num ; k++)
            {
                if(dcoeff[k] == bincoeff[n+j]) break;
            }
            if(k==num)
            {
                dcoeff[k] = bincoeff[n+j];
                num++;
            }
        }
    }
    
    //nCk for n<51 2, 3, 5 and 7 can only be present as squares
    for(k = 0; k< num ; k++)
    {
        if((dcoeff[k] % 4 == 0)|| (dcoeff[k] % 9 == 0) ||(dcoeff[k] % 25 == 0) || (dcoeff[k] % 49 == 0))
        {
            //do nothing
        }
        else
        {
            sum +=dcoeff[k];
            
        }
            
    }
    
}
