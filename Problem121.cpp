//
//  Problem121.cpp
//  testC
//
//  Created by Sandip Pal on 18/03/13.
//  Copyright (c) 2013 Sandip Pal. All rights reserved.
//

#include "Problem121.h"

double ProbX[16][2]; // X0  = 0 ... X1 = 0 if red     X1 = 1 if blue and so on

double ProbY[16][16]; //Y0 = 0 -->dummy ; Y1=  X1   Y2 = Y1 + X2  ... Y3 = Y2 + X3 .... Y15 = Y14 + X15

void SolveProblem121()
{
    double sum = 0.0;
    ProbX[0][0] = 1.0; // just dummy probability
    ProbX[0][1] = 0.0;
    
    for( int i = 1 ; i < 16 ; i++)
    {
        ProbX[i][0] = (double)i/(i+1); // Probability of getting red on ith draw
        ProbX[i][1] = 1.0/(i+1);  // Probability of getting blue on ith draw
    }
    
    // Random variable Y0 is 0 with Prob 1
    ProbY[0][0] = 1.0;
    for(int j = 1 ; j < 16 ; j++)
    {
        ProbY[0][j] = 0.0;
    }
    
    //initialize all other Prob to 0 before calculating
    for( int i = 1 ; i < 16 ; i++)
    {
        for(int j = 0 ; j < 16 ; j++)
        {
            ProbY[i][j] = 0.0;
        }
    }
    
    
    
    for( int i = 1 ; i < 16 ; i++)
    {
        for(int k = 0 ; k <=1 ; k++) // for the Random variable Xi
        {
            for(int l = 0; l <= 14 ; l++) // as Y14 can go upto 14 only
            {
                ProbY[i][k+l] = ProbY[i][k+l] + ProbX[i][k] * ProbY[i-1][l];
            }
        }
    }
    
    
    for( int i = 8 ; i < 16 ; i++)
    {
        sum+=ProbY[15][i];
    }
    int i = 1.0/sum ;
    
    printf( "Max allocation should be 1$ * 1/sum =  %d\n", i);
    

}
