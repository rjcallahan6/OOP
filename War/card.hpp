#ifndef CARD_HPP 
#define CARD_HPP

#include <iostream>

enum Rank
{
  Two,
  Three,
  Four,
  Five,
  Six,
  Seven,
  Eight,
  Nine,
  Ten,
  Jack,
  Queen,
  King,
  Ace
};

enum Suit
{
  Spades, 
  Clubs,
  Diamonds,
  Hearts,
};


class Card
{
public:
  Card() = default;
  Card(Rank r, Suit s);
  
  char get_suit() const {return m_suit;};
  char get_rank() const (return m_rank;};

private:
  Rank m_rank;
  Suit m_suit;
};





#endif
