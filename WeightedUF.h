//
//  WeightedUF.h
//  Union-Find
//
//  Created by Daniel Walsh on 4/6/14.
//  Copyright (c) 2014 Daniel Walsh. All rights reserved.
//

#ifndef __Union_Find__WeightedUF__
#define __Union_Find__WeightedUF__

#include <iostream>

class WeightedUF
{
private:
    unsigned *id;
    unsigned *sz;
    unsigned Root(unsigned);
public:
    WeightedUF(unsigned);
    ~WeightedUF();
    bool isConnected(unsigned, unsigned);
    void Union(unsigned, unsigned);
};

#endif /* defined(__Union_Find__WeightedUF__) */
