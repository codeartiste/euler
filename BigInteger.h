//
//  BigInteger.h
//  testC
//
//  Created by Sandip Pal on 01/09/12.
//  Copyright (c) 2012 Sandip Pal. All rights reserved.
//

#ifndef __testC__BigInteger__
#define __testC__BigInteger__

#include <iostream>
class BigInteger
{
private:
    unsigned long long num[20];
    unsigned int whch;
public:
    BigInteger();
    
    BigInteger( unsigned long long t);
    
    void Multiply(unsigned long long x);
    
    
};

#endif /* defined(__testC__BigInteger__) */
