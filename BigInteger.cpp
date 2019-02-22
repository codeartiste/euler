//
//  BigInteger.cpp
//  testC
//
//  Created by Sandip Pal on 01/09/12.
//  Copyright (c) 2012 Sandip Pal. All rights reserved.
//

#include "BigInteger.h"


BigInteger::BigInteger()
{
    for(int i = 0 ; i< 20; i++) num[i] = 0;
    whch = 0;
}

BigInteger::BigInteger( unsigned long long t)
{
    BigInteger();
    num[0] = t;
}

void BigInteger::Multiply(unsigned long long x)
{
    int powr[64];
    
}
