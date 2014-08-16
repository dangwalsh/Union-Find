//
//  QuickUnionUF.cpp
//  QuickFind
//
//  Created by Daniel Walsh on 4/6/14.
//  Copyright (c) 2014 Daniel Walsh. All rights reserved.
//

#include "QuickUnionUF.h"

QuickUnionUF::QuickUnionUF(unsigned n)
:id(new unsigned[n]) {
    for (unsigned i = 0; i < n; ++i)
        id[i] = i;
}

QuickUnionUF::~QuickUnionUF() {
    delete [] id;
}

unsigned QuickUnionUF::Root(unsigned i) {
    while (i != id[i]) i = id[i];
    return i;
}

bool QuickUnionUF::isConnected(unsigned p, unsigned q) {
    return Root(p) == Root(q);
}

void QuickUnionUF::Union(unsigned p, unsigned q) {
    unsigned i = Root(p);
    unsigned j = Root(q);
    id[i] = j;
}