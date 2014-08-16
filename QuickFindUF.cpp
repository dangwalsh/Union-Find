//
//  QuickFindUF.cpp
//  QuickFind
//
//  Created by Daniel Walsh on 4/6/14.
//  Copyright (c) 2014 Daniel Walsh. All rights reserved.
//

#include "QuickFindUF.h"

QuickFindUF::QuickFindUF(unsigned n)
:id(new unsigned [n]) {
    std::cout << "default const\n";
    for (unsigned i = 0; i < n; ++i)
        id[i] = i;
}
QuickFindUF::~QuickFindUF() {
    std::cout << "destructor\n";
    delete [] id;
}
void QuickFindUF::Union(unsigned p, unsigned q) {
    unsigned pid = id[p];
    unsigned qid = id[q];
    unsigned size = sizeof(id)/sizeof(id[0]);
    for (unsigned i = 0; i < size; ++i)
        if (id[i] == pid) id[i] = qid;
}