//
//  main.cpp
//  Project2
//
//  Created by Jack Magrath on 2/7/17.
//  Copyright © 2017 Jack Magrath. All rights reserved.
//

#include <iostream>
#include "card.h"
#include "deck.h"
#include "node.h"

int main(int argc, const char * argv[]) {
    
    //creates, shuffles, and prints the deck
    deck deck;
    deck.shuffle();
    cout << deck << endl;
    
    
}
