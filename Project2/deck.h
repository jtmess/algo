//
//  deck.h
//  Project2
//
//  Created by Jack Magrath on 2/7/17.
//  Copyright © 2017 Jack Magrath. All rights reserved.
//

#ifndef deck_h
#define deck_h

#include <iostream>
#include "string.h"
#include "node.h"
#include "card.h"

using namespace std;

class deck
{
    
    public:
        deck();
        node<card> *front = NULL;
        node<card> *d;
        void shuffle();
        friend ostream& operator<< (ostream& ostr, const deck& deck);
    
};


#endif /* deck_h */
