#include "card.hpp"
#include <iostream>

Card::Card(Rank r, Suit s) : m_rank(r), m_suit(s)
{

}

std::ostream& operator << (std::ostream& output, Card card)
{
  switch (card.m_rank)
  {
    case 0:
      output << "2";
      break;
    case 1:
      output << "3";
      break;
    case 2:
      output << "4";
      break;
    case 3:
      output << "5";
      break;
    case 4:
      output << "6";
      break;
    case 5:
      output << "7";
      break;
    case 6:
      output << "8";
      break;
    case 7:
      output << "9";
      break;
    case 8:
      output << "T";
      break;
    case 9:
      output << "J";
      break;
    case 10:
      output << "Q";
      break;
    case 11:
      output << "K";
      break;
    case 12:
      output << "A";
      break;
  }





