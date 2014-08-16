//
//  QuickUnionUF.h
//  QuickFind
//
//  Created by Daniel Walsh on 4/6/14.
//  Copyright (c) 2014 Daniel Walsh. All rights reserved.
//

#ifndef __QuickFind__QuickUnionUF__
#define __QuickFind__QuickUnionUF__

#include <iostream>

class QuickUnionUF
{
private:
    unsigned *id;
    unsigned Root(unsigned);
public:
    QuickUnionUF(unsigned);
    ~QuickUnionUF();
    bool isConnected(unsigned, unsigned);
    void Union(unsigned, unsigned);
};

#endif /* defined(__QuickFind__QuickUnionUF__) */
