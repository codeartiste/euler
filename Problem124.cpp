//
//  Problem124.cpp
//  testC
//
//  Created by Sandip Pal on 25/02/13.
//  Copyright (c) 2013 Sandip Pal. All rights reserved.
//

#include "Problem124.h"
#if 0
#define CONST_MAX 100001


struct NumberHolder
{
    
    bool isPrime;
    int rad; 
};
struct NumRad
{
    int rad;
    int num;
};

static NumberHolder nums[CONST_MAX];

static NumRad SortedNum[CONST_MAX];
static int len = 0;


void SolveProblem124()
{

    for(int i = 0; i < CONST_MAX ; i++)
    {
        nums[i].isPrime = true;
        nums[i].rad = 1;
    }
    
    SortedNum[0].rad = 1;
    SortedNum[0].num = 1;
    len = 1;
    for(int i = 2; i < CONST_MAX; i++ )
    {
        if(nums[i].isPrime == true)
        {
            nums[i].rad = i;// the radix for a prime p is the number itself
            for(int j = 2*i; j < CONST_MAX; j= j + i )
            {
                nums[j].isPrime = false;
                nums[j].rad *= i; // THe radix is calculated here for all composite numbers
            }
        }
        
        //Insertion sort below (Special case 1 is at the satrting of the array, so no first element check)
        for(int k = len-1; k >= 0 ; k--)
        {
            if(nums[i].rad < SortedNum[k].rad)
            {
                SortedNum[k+1] = SortedNum[k];
            }
            else
            {
                SortedNum[k+1].num = i;
                SortedNum[k+1].rad = nums[i].rad;
                break;
            }
            
        }
        len++;
      
    }
    

}

#endif
