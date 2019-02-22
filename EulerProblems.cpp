//
//  EulerProblems.cpp
//  testC
//
//  Created by Sandip Pal on 16/08/12.
//  Copyright (c) 2012 Sandip Pal. All rights reserved.
//

#include "EulerProblems.h"
//
//  Problems.cpp
//  testC
//
//  Created by Sandip Pal on 16/08/12.
//  Copyright (c) 2012 Sandip Pal. All rights reserved.
//

//#include "Problems.h"
#if 0
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
/*
struct bignum
{
    int digits[1000];
    int sig;
    bignum()
    {
        memset(digits, 0, 1000 );
        sig = 0;
    }
    
};

void AddBigNum(bignum a, bignum b, bignum &c)
{
    int carry = 0;
    int max;
    int i;
    max = (a.sig > b.sig)? a.sig: b.sig;
    for( i = 0 ; i< max ; i++)
    {
        c.digits[i] = a.digits[i] + b.digits[i] + carry;
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
        c.sig = max+1;
        
    }
    else
    {
        c.sig = max;
        
    }
    
    
}

void PRINTBIG(bignum a)
{
    for( int i = a.sig ; i > 0 ; i--)
    {
        printf ("%d", a.digits[i-1]);
        
    }
    
}
*/

/*
 
 int i;
 int c = 0;
 bignum  numr, denom, numr1, denom2;
 numr.digits[0] = 3;
 numr.sig = 1 ;
 denom.digits[0] = 2;
 denom.sig = 1 ;
 
 for(i = 2; i<=1000 ; i++)
 {
 
 //numr1  = numr + 2*denom;
 AddBigNum(denom, denom, numr1);
 AddBigNum(numr, numr1, numr1);
 
 //denom2 = numr + denom ;
 AddBigNum(numr, denom, denom2);
 numr   = numr1 ;
 denom  = denom2 ;
 
 
 printf ("Num = ");
 PRINTBIG(numr);
 printf("/");
 PRINTBIG(denom);
 printf("\n");
 if(numr.sig > denom.sig)
 {
 c++;
 }
 
 }
 printf("%d\n", c);
 
 */

int checkpandigital(unsigned long i)
{
    int digits[] ={0, 0, 0, 0, 0, 0, 0, 0, 0};
    
    int rem = 0;
    int num = 0;
    while(i > 0)
    {
        rem = i %10 ;
        if(rem == 0) return 0;
        if(digits[rem - 1] == 1)
        {
            // digit is repeated
            return 0;
        }
        else
        {
            digits[rem - 1] = 1;
        }
        i = i /10 ;
        num++;
    }
    for( int j = 0 ; j < num ; j++)
    {
        if(digits[j] == 0) return 0;
    }
    
    return 1;
}

/*
 unsigned long i;
 for( i = 3 ; i < 10000001; i = i + 2)
 {
 int flag = 1;
 for(unsigned long j = 2; j <= sqrt(i); j++)
 {
 if( i % j == 0)
 {
 flag = 0;
 break;
 }
 
 }
 if(flag == 1)
 {
 if(checkpandigital(i) == 1)
 {
 printf("Pandigital = %ld\n", i);
 }
 }
 }
*/
int checkpandigitalwith0(unsigned long i)
{
    int digits[] ={0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    
    int rem = 0;
    int num = 0;
    while(i > 0)
    {
        rem = i %10 ;
        if(digits[rem] == 1)
        {
            // digit is repeated
            return 0;
        }
        else
        {
            digits[rem] = 1;
        }
        i = i /10 ;
        num++;
    }
    for( int j = 0 ; j < num ; j++)
    {
        if(digits[j] == 0) return 0;
    }
    
    return 1;
}


unsigned long long reverse(unsigned long long n)
{
    unsigned long long k = 0;
    while(n > 0)
    {
        k = k*10 + n%10;
        n /= 10;
    }
    
    return k;
}

bool checkPallindrome(unsigned long long  n)
{
    
    if (reverse(n) == n) return true;
    
    return false;
}

struct bignum
{
    int digits[1000];
    int sig;
    bignum()
    {
        memset(digits, 0, 1000 );
        sig = 0;
    }
    void setnum(long long i)
    {
        int j = 0;
        while(i > 0)
        {
            digits[j] = i%10;
            i/= 10;
            j++;
        }
        sig = j;
        
    }
    
};
bool checkBigNumPallindrome(bignum n)
{
    for( int i = 0 ; i< (n.sig/2) ; i++)
    {
        if (n.digits[n.sig- i- 1]!= n.digits[i])
            return false;
    }
    return true;
    
}

void ReverseBigNum(bignum a, bignum &c)
{
    for( int i = 0 ; i< a.sig ; i++)
    {
        c.digits[a.sig- i - 1]= a.digits[i];
    }
    c.sig = a.sig;
    
}

void AddBigNum(bignum a, bignum b, bignum &c)
{
    int carry = 0;
    int max;
    int i;
    max = (a.sig > b.sig)? a.sig: b.sig;
    for( i = 0 ; i< max ; i++)
    {
        c.digits[i] = a.digits[i] + b.digits[i] + carry;
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
        c.sig = max+1;
        
    }
    else
    {
        c.sig = max;
        
    }
    
    
}

void PRINTBIG(bignum a)
{
    for( int i = a.sig ; i > 0 ; i--)
    {
        printf ("%d", a.digits[i-1]);
        
    }
    
}

/*
 unsigned long long i;
 bignum num, b, c;
 int count;
 int ans = 0;
 for(i = 1; i < 10000 ; i++)
 {
 count = 1;
 num.setnum(i);
 ReverseBigNum(num, c);
 AddBigNum(num, c , num);
 while(count <= 50)
 {
 if(checkBigNumPallindrome(num) == true)
 {
 
 
 break;
 }
 count++;
 ReverseBigNum(num, c);
 AddBigNum(num, c, num);
 
 }
 if(count > 50)
 {
 printf("Not Num= %lld  iter= %d Stopat= ", i , count);
 PRINTBIG(num);
 printf("\n");
 ans+= 1;
 }
 
 
 
 }
 
 printf("Total Lyc numbers =  %d\n", ans);
*/



#define NUM73 12000


unsigned long long HCF(unsigned long long num1, unsigned long long num2)
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

void SolveProblem73()
{
    unsigned int iN, jD;
    int count = 0;
    
    
    for(iN = 1; iN <= NUM73; iN++)
    {
        unsigned int left, right;
        left  = 2*iN + 1;  // 1/2 > iN/left
        right = 3*iN - 1;  // 1/3 < iN/right
        
        if(left <= NUM73) // this is to ensure that the denominator is less than the NUM or else dont run the loop
        {
            if(right > NUM73) right = NUM73; // this is to ensure the same as above but for right bound
            
            for(jD = left; jD <= right; jD++)
            {
                //printf("%d/%d, ", iN, jD);
                if(HCF(iN, jD) == 1)
                {
                    count++;
                }
            }
            //printf("\n");
        }
        
    }
    printf("Count = %d\n", count);
    
}

#define NUM72 1000000

void SolveProblem72()
{
    unsigned long long iN, jD;
    unsigned long long count = 0;
    
    
    for(iN = 1; iN <= NUM72; iN++)
    {
        int k = 1;
        if(iN%2 == 0) k = 2;
        for(jD = iN+1; jD <= NUM72; jD = jD + k)
        {
            //printf("%d/%d, ", iN, jD);
            if(HCF(iN, jD) == 1)
            {
                count++;
            }
        }
        
        
    }
    printf("Count = %lld\n", count);
    
}

#define SIEVE_LENGTH  100000002

static bool PrimeSieve[SIEVE_LENGTH];


static int Problem373()
{
    

    long long num = 0;
    long long sum =0;
    memset(PrimeSieve, 0, SIEVE_LENGTH);
    
    PrimeSieve[1] = true;
    for (long long i = 2 ; i <= SIEVE_LENGTH ; i++)
    {
        if(PrimeSieve[i] == true)
        {
            continue;
        }
        else
        {
            for(long long j = i*(i-1); j < SIEVE_LENGTH ; j+= i)
            {
                PrimeSieve[j] = true;
                
            }
            bool isAllPrime = true ;
            for(long long j = 1; j*j <= (i-1) ; j++)
            {
                if((i-1)%j == 0)
                {
                    num = j + ((i-1)/j);
                    if(PrimeSieve[num] == true)
                    {
                        isAllPrime = false ;
                        break;
                    }
                }
            }
            if(isAllPrime == true)
            {
                sum+= i-1 ;
            }
            
            
        }
    }
    //
    //    for (long long i = 2 ; i < SIEVE_LENGTH ; i = i + 2)
    //    {
    //        if(PrimeSieve[i+1] == false)
    //        {
    //                    }
    //
    //
    //    }
    
    printf("sum = %lld \n", sum);
    return 1;
}

/*
 
 //Problem 203
 int main()
 {
 unsigned long long arr6[37], arr4[37];
 
 for(int c = 0; c < 37; c++)
 {
 arr6[c] = 0;
 arr4[c] = 0;
 }
 
 for(int i = 1 ; i<=6 ; i++)
 {
 for(int j = 1 ; j<=6 ; j++)
 {
 for(int k = 1 ; k<=6 ; k++)
 {
 for(int l = 1 ; l<=6 ; l++)
 {
 for(int m = 1 ; m<=6 ; m++)
 {
 for(int n = 1 ; n<=6 ; n++)
 {
 int sum;
 sum = i+j+k+l+m+n;
 arr6[sum]++;
 
 }
 
 }
 
 }
 
 }
 
 }
 
 }
 for(int i = 1 ; i<=4 ; i++)
 {
 for(int j = 1 ; j<=4 ; j++)
 {
 for(int k = 1 ; k<=4 ; k++)
 {
 for(int l = 1 ; l<=4 ; l++)
 {
 for(int m = 1 ; m<=4 ; m++)
 {
 for(int n = 1 ; n<=4 ; n++)
 {
 for(int o = 1 ; o<=4 ; o++)
 {
 for(int p = 1 ; p<=4 ; p++)
 {
 for(int q = 1 ; q<=4 ; q++)
 {
 int sum;
 
 sum = i+j+k+l+m+n+o+p+q;
 arr4[sum]++;
 }
 }
 }
 }
 
 }
 
 }
 
 }
 
 }
 
 }
 unsigned long long totalcases = 0;
 for(int i = 9 ; i <37 ; i++)
 {
 for( int j = 6 ; j<i ; j++)
 {
 totalcases += arr4[i] * arr6[j] ;
 }
 }
 
 printf("Prob = %0.7f", (double)totalcases /(4*4*4*4*4*4*4*4*4*6*6*6*6*6*6LL));
 
 
 return 1;
 }
*/

#define T_DICE 4
#define C_DICE 6
#define O_DICE 8
#define D_DICE 12
#define I_DICE 20
long long T[T_DICE+1];
long long C[T_DICE+1][T_DICE*C_DICE+1];
long long O[T_DICE*C_DICE+1][T_DICE*C_DICE*O_DICE +1];
double D[T_DICE*C_DICE*O_DICE+1][T_DICE*C_DICE*O_DICE*D_DICE +1];
long long I[T_DICE*C_DICE*O_DICE*D_DICE +1][T_DICE*C_DICE*O_DICE*D_DICE*I_DICE +1];
int main1()
{
    
    //SolveProblem54();
    
    
    int i ;
    
    T[0] = 0 ;
    T[1] = T[2] = T[3] = T[4] = 1;
    
    
    for(i = 0 ; i< (T_DICE+1); i++)
    {
        for( int j = 0 ; j < T_DICE*C_DICE+1 ; j++)
        {
            C[i][j] = 0 ;
        }
    }
    
    for(i = 0 ; i< (T_DICE*C_DICE+1); i++)
    {
        for( int j = 0 ; j < (T_DICE*C_DICE*O_DICE +1) ; j++)
        {
            O[i][j] = 0 ;
        }
    }
    
    for(i = 0 ; i< (T_DICE*C_DICE*O_DICE +1); i++)
    {
        for( int j = 0 ; j < (T_DICE*C_DICE*O_DICE*D_DICE +1) ; j++)
        {
            D[i][j] = 0.0 ;
        }
    }
    
    for(i = 0 ; i< (T_DICE*C_DICE*O_DICE*D_DICE +1 ); i++)
    {
        for( int j = 0 ; j < (T_DICE*C_DICE*O_DICE*D_DICE*I_DICE +1) ; j++)
        {
            I[i][j] = 0 ;
        }
    }
    
    
    
    C[1][1] = C[1][2] = C[1][3] = C[1][4]= C[1][5] = C[1][6]  = 1 ;
    for(int j = 2 ; j < T_DICE+1 ; j++)
    {
        for( int i  = 1 ; i <= 6 ; i++)
        {
            for( int l = 0 ; l < (T_DICE*C_DICE+1 -i) ; l++)
            {
                
                C[j][l+i] += C[j-1][l];
            }
            
        }
    }
    
    O[1][1] = O[1][2] = O[1][3] = O[1][4]= O[1][5] = O[1][6] = O[1][7]= O[1][8] = 1 ;
    for(int j = 2 ; j < T_DICE*C_DICE+1 ; j++)
    {
        for( int i  = 1 ; i <= O_DICE ; i++)
        {
            for( int l = 0 ; l < (T_DICE*C_DICE*O_DICE +1 -i) ; l++)
            {
                
                O[j][l+i] += O[j-1][l];
            }
            
        }
    }
    
    D[1][1] = D[1][2] = D[1][3] = D[1][4]= D[1][5] = D[1][6] = D[1][7]=
    D[1][8] = D[1][9] = D[1][10] = D[1][11]= D[1][12] = 1.0/1000.0 ;
    
    for(int j = 2 ; j < T_DICE*C_DICE*O_DICE +1 ; j++)
    {
        for( int i  = 1 ; i <= D_DICE ; i++)
        {
            for( int l = 0 ; l < (T_DICE*C_DICE*O_DICE*D_DICE +1 -i) ; l++)
            {
                
                D[j][l+i] += D[j-1][l];
            }
            
        }
    }
    
    I[1][1] = I[1][2] = I[1][3] = I[1][4]= I[1][5] = I[1][6] = I[1][7]=
    I[1][8] = I[1][9] = I[1][10] = I[1][11]= I[1][12] = I[1][13] = I[1][14]= I[1][15] =
    I[1][16] = I[1][17] = I[1][18]= I[1][19] = I[1][20]= 1 ;
    
    for(int j = 2 ; j < T_DICE*C_DICE*O_DICE*D_DICE +1 ; j++)
    {
        for( int i  = 1 ; i <= I_DICE ; i++)
        {
            for( int l = 0 ; l < (T_DICE*C_DICE*O_DICE*D_DICE*I_DICE +1 -i) ; l++)
            {
                
                I[j][l+i] += I[j-1][l];
            }
            
        }
    }
    
    
    return 1;
}

#endif
