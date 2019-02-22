//
//  Problem92.cpp
//  testC
//
//  Created by Sandip Pal on 27/08/12.
//  Copyright (c) 2012 Sandip Pal. All rights reserved.
//
#if 0
#include "Problem92.h"


struct bignum
{
    int digits[100];
    int sig;
    bignum()
    {
        memset(digits, 0, 100*4 );
        sig = 0;
    }
    bignum(unsigned int k)
    {
        int c = 0;
        while(k > 0)
        {
            digits[c] = k%10 ;
            k = k/10 ;
            c++;
            
        }
        sig = c ;
    }
    
};


static int sqrarr[10] = {0, 1, 4, 9, 16, 25, 36, 49, 64, 81};

void AddBigNumplus1(bignum a, bignum &c)
{
    int carry = 0;
    int i;
    for( i = 0 ; i< a.sig ; i++)
    {
        if(i == 0)
        {
            c.digits[i] = a.digits[i] + 1 + carry;
        }
        else
        {
            c.digits[i] = a.digits[i] + carry;
        }
        if ((c.digits[i] - 10) >= 0)
        {
            carry = 1 ;
            c.digits[i] = c.digits[i] % 10 ;
        }
        else
        {
            carry = 0 ;
        }
    }
    if(carry == 1)
    {
        c.digits[i] = 1;
        c.sig = a.sig +1;
        
    }
    else
    {
        c.sig = a.sig;
        
    }
    
    
}

int calculateSqrSumDigits(bignum &a)
{
 
    int sum = 0;
    for( int i = a.sig ; i > 0 ; i--)
    {
        sum += sqrarr[a.digits[i-1]];
        
    }
    return sum;
    
}


#define BLANK       0
#define ONE         1
#define EIGHT_NINE  2
 

int isConvergent89[567 + 1];
void SolveProblem92()
{
    
    int i, sum, ans = 0;
    time_t t1,t2;
    
    bignum b;
    (void) time(&t1);
    b.digits[0] = 0;
    b.sig = 1;
    //initializing array
    for(i = 0 ; i < 568 ; i++) isConvergent89[i] = 0;

    for(i = 1 ; i < 10000000 ; i++)
    {
        bignum c ;
        bool brk_condition = true;
        AddBigNumplus1(b, c);
        b = c;
        while(brk_condition)
        {
     
            sum = calculateSqrSumDigits(c);
            if(i < 568)
            {
                if (sum == 1)  isConvergent89[i] = ONE;
                if (sum == 89) isConvergent89[i] = EIGHT_NINE;
            
                if(isConvergent89[i] == EIGHT_NINE)
                {
                    //increment our ans by 1
                    ans++ ;
                    brk_condition = false ;
                }
                else if (isConvergent89[i] == ONE)
                {
                    //do nothing . this number converges to 1
                    brk_condition = false ;
                }
                else
                {
                    bignum d(sum);
                    c = d;
                }
            }
            else
            {
                if(isConvergent89[sum] == EIGHT_NINE)
                {
                    //increment our ans by 1
                    ans++ ;
                    brk_condition = false ;
                }
                else if (isConvergent89[sum] == ONE)
                {
                    //do nothing . this number converges to 1
                    brk_condition = false ;
                }

                
            }
        }
        
    }
    (void) time(&t2);
    printf("Time to solve %ld secs\n", (int) t2-t1);
    printf("Ans = %d", ans);
    
    
    
}
#endif
