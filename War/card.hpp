#ifndef CARD_HPP 
#define CARD_HPP

enum Rank
{
  Ace,
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
  Card(Rank r, Suit s);

private:
  Rank rank;
  Suit suit;
};





#endif
