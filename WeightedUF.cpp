//
//  WeightedUF.cpp
//  Union-Find
//
//  Created by Daniel Walsh on 4/6/14.
//  Copyright (c) 2014 Daniel Walsh. All rights reserved.
//

#include "WeightedUF.h"

WeightedUF::WeightedUF(unsigned n)
:id(new unsigned[n]),sz(new unsigned[n] ) {
    for (unsigned i = 0; i < n; ++i) {
        id[i] = i;
        sz[i] = 1;
    }
}

WeightedUF::~WeightedUF() {
    delete [] id;
}

unsigned WeightedUF::Root(unsigned i) {
    while (i != id[i]) {
        id[i] = id[id[i]]; // path compression
        i = id[i];
    }
    return i;
}

bool WeightedUF::isConnected(unsigned p, unsigned q) {
    return Root(p) == Root(q);
}

void WeightedUF::Union(unsigned p, unsigned q) {
    unsigned i = Root(p);
    unsigned j = Root(q);
    if (i == j) return;
    if (sz[i] < sz[j]) {
        id[i] = j;
        sz[j] += sz[i];
    } else {
        id[j] = i;
        sz[i] += sz[j];
    }
}