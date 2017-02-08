//
//  card.h
//  Project2
//
//  Created by Jack Magrath on 2/7/17.
//  Copyright © 2017 Jack Magrath. All rights reserved.
//

#ifndef card_h
#define card_h
#include <iostream>
#include "string.h"

using namespace std;

class card
{
    private:
        int value;
        string suit;
        void setValue(int v);
        void setSuit(string s);

    public:
        card(int value, string suit);
        int getValue();
        string getSuit();
        friend ostream& operator<< (ostream& ostr, const card& c);
    
};

#endif /* card_h */
