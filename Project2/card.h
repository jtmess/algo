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
        void setValue(int v); //sets card value
        void setSuit(string s); //sets suit value

    public:
        card(int value, string suit); //constructor
        int getValue(); //gets card value
        string getSuit(); //get suit value
        friend ostream& operator<< (ostream& ostr, const card& c); // << override
    
};

#endif /* card_h */
