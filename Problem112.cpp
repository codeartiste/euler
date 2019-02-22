
#if 0
#include "Problem112.h"

#define DIGITS  100

void SolveProblem112()
{
    
    unsigned long long bigcnt[DIGITS][10], smlcnt[DIGITS][10];
    unsigned long long count   = 0;
    unsigned long long count1  = 0;
    
    //Initialize to 0
    for(int i = 0 ; i < DIGITS ; i++)
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
    //initialize small cnt
    smlcnt[0][0] = 0;
    for(int i = 1; i< 10 ; i++)
    {
        smlcnt[0][i] = 1;
        count1+= smlcnt[0][i];
    }
    
    
    for( int j = 1; j < DIGITS ; j++)
    {
        for( int i = 0 ; i < 10 ; i++)
        {
            for( int k  = 0 ; k <=i ; k++ )
            {
                bigcnt[j][i] += bigcnt[j-1][k];
            }
            for( int m = i ; m < 10 ; m++ )
            {
                smlcnt[j][i] += smlcnt[j-1][m];
            }
            count1+= bigcnt[j][i] -1;
            if(i!= 0)count1+= smlcnt[j][i];
            
        }
        printf("Count1 = %lld\n", count1 );
        
      
    }
    

    
    for( int j = 0; j < DIGITS ; j++)
    {
        count = count + bigcnt[j][0];
        for( int i = 1 ; i < 10 ; i++) // Donot take the 0 count for sml count
        {
            count = count + smlcnt[j][i]+ bigcnt[j][i];
        }
    }
    

  
    printf("Count  = %lld\n", count  - ((DIGITS)*10)); // subtract the duplicate values like 11, 22, 33 ... 111, 222 ...
    printf("Count1 = %lld\n", count1 );
    
}


/////////////////////////////
#define DIGITS_112  100

struct bignum112
{
    char digits[DIGITS_112];
    int sig;
    bignum112()
    {
        memset(digits, 0, DIGITS_112 );
        sig = 0;
    }
    bignum112(unsigned int k)
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



void AddBigNumplus1(bignum112 &a)
{
    int carry = 0;
    int i;
    for( i = 0 ; i< a.sig ; i++)
    {
        if(i == 0)
        {
            a.digits[i] = a.digits[i] + 1 + carry;
        }
        else
        {
            a.digits[i] = a.digits[i] + carry;
        }
        if ((a.digits[i] - 10) >= 0)
        {
            carry = 1 ;
            a.digits[i] = a.digits[i] % 10 ;
        }
        else
        {
            carry = 0 ;
        }
    }
    if(carry == 1)
    {
        a.digits[i] = 1;
        a.sig = a.sig +1;
        
    }

    
    
}


void SolveProblem112A()
{
    int i;
    unsigned long long totCount = 0;
    unsigned long long nonBouncyCount = 0;
    bignum112 a(1);
   
    
    while(true)
    {
        int sign = 0;
        totCount++ ;
        for( i = 1 ; i < a.sig ; i++)
        {
            if( (a.digits[i] - a.digits[i-1]) > 0)
            {
                if(sign == -1) break;
                sign = 1 ;
            }
            else if((a.digits[i] - a.digits[i-1]) < 0)
            {
                if(sign == 1) break;
                sign = -1 ;
            }
            
        }
        if (i == a.sig)
        {
            nonBouncyCount++;
        }
        if(nonBouncyCount <= 0.01*totCount )
        {
            printf("Total number  = %lld,  NonBouncyCount = %lld\n", totCount, nonBouncyCount);
            
            break;
        }
        
        
        AddBigNumplus1(a);
        
        
    }
    
    
}
#endif

