//
//  deck.cpp
//  Project2
//
//  Created by Jack Magrath on 2/7/17.
//  Copyright © 2017 Jack Magrath. All rights reserved.
//

#include "deck.h"
#include <iostream>
#include "string.h"
#include <vector>

using namespace std;

deck::deck() {
    //initialize deck
    string s;
    
    
    for (int i = 0; i < 4; i++) {
        //chooses suit
        switch (i) {
            case 0:
                s = "Clubs";
                break;
            case 1:
                s = "Diamonds";
                break;
            case 2:
                s = "Hearts";
                break;
            case 3:
                s = "Spades";
                break;
            default:
                break;
        }
        //face value
        for (int j = 13; j > 0; j--) {
            d = new node<card>(card(j,s), front);
            front = d;
            
        }
    }
}

ostream& operator<< (ostream& ostr, const deck& deck) {
    node<card> curr = *deck.front;
    ostr << curr.nodeValue << endl;
    while (curr.next != NULL) {
        curr = *curr.next;
        ostr << curr.nodeValue << endl;
    }
    
    return ostr;
        
}

void deck::shuffle() {
    //puts deck into vector form
    vector<card> vDeck;
    node<card> curr = *front;
    vDeck.push_back(curr.nodeValue);
    while (curr.next != NULL) {
        curr = *curr.next;
        vDeck.push_back(curr.nodeValue);
    }
    
    //shuffles
    random_shuffle(vDeck.begin(), vDeck.end());
    
    
    //puts deck back into linked list form
    front = NULL;
    for (int i = 0; i < vDeck.size(); i++) {
        d = new node<card>(vDeck.at(i), front);
        front = d;
    }
}

