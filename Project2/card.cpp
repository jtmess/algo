//
//  card.cpp
//  Project2
//
//  Created by Jack Magrath on 2/7/17.
//  Copyright © 2017 Jack Magrath. All rights reserved.
//

#include "card.h"
#include <iostream>
using namespace std;

card::card(int value, string suit) {
    setValue(value);
    setSuit(suit);
    
}

void card::setValue(int v) {
    value = v;
}

void card::setSuit(string s) {
    suit = s;
}

int card::getValue() {
    return value;
}

string card::getSuit() {
    return suit;
}

ostream& operator<< (ostream& ostr, const card& c) {
    ostr << c.value << " " << c.suit;
    return ostr;
}
