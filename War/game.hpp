#ifndef GAME_HPP
#define GAME_HPP

#include "card.hpp"
#include<iostream>
#include <deque>

class Game
{
  private:
    std::deque<Card> deck;
    std::deque<Card> create_deck();
    
  public:
    Game();
    void shuffle();
    void deal();
    
};
    


#endif
