//
//  QuickFindUF.h
//  QuickFind
//
//  Created by Daniel Walsh on 4/6/14.
//  Copyright (c) 2014 Daniel Walsh. All rights reserved.
//

#ifndef __QuickFind__QuickFindUF__
#define __QuickFind__QuickFindUF__

#include <iostream>

class QuickFindUF
{
private:
    unsigned *id;
public:
    // constructors
    QuickFindUF(unsigned n);
    ~QuickFindUF();
    // member functions
    inline bool isConnected(unsigned p, unsigned q) { return id[p] == id[q]; }
    void Union(unsigned p, unsigned q);
};

#endif /* defined(__QuickFind__QuickFindUF__) */
