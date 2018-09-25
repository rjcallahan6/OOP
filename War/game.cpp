#include "game.hpp"
#include "card.hpp"
#include <iostream>
#include <deque>
#include <random>
#include <algorithm>
#include <chrono>

Game::Game()
{
  deck = create_deck();
  shuffle();
  deal();
}


std::deque<Card> Game::create_deck()
{
  return std::deque<Card> { {Ace, Spades},
                            {Two, Spades},
                            {Three, Spades},
                            {Four, Spades},
                            {Five, Spades},
                            {Six, Spades},
                            {Seven, Spades},
                            {Eight, Spades},
                            {Nine, Spades},
                            {Ten, Spades},
                            {Jack, Spades},
                            {Queen, Spades},
                            {King, Spades},
                            {Ace, Clubs},
                            {Two, Clubs},
                            {Three, Clubs},
                            {Four, Clubs},
                            {Five, Clubs},
                            {Six, Clubs},
                            {Seven, Clubs},
                            {Eight, Clubs},
                            {Nine, Clubs},
                            {Ten, Clubs},
                            {Jack, Clubs},
                            {Queen, Clubs},
                            {King, Clubs},
                            {Ace, Diamonds},
                            {Two, Diamonds},
                            {Three, Diamonds},
                            {Four, Diamonds},
                            {Five, Diamonds},
                            {Six, Diamonds},
                            {Seven, Diamonds},
                            {Eight, Diamonds},
                            {Nine, Diamonds},
                            {Ten, Diamonds},
                            {Jack, Diamonds},
                            {Queen, Diamonds},
                            {King, Diamonds},
                            {Ace, Hearts},
                            {Two, Hearts},
                            {Three, Hearts},
                            {Four, Hearts},
                            {Five, Hearts},
                            {Six, Hearts},
                            {Seven, Hearts},
                            {Eight, Hearts},
                            {Nine, Hearts},
                            {Ten, Hearts},
                            {Jack, Hearts},
                            {Queen, Hearts},
                            {King, Hearts} };
}

//shuffles deck
void Game::shuffle()
{
  std::shuffle(deck.begin(), deck.end(),std::default_random_engine(seed));
}

//alternates cards between twoplayers
void Game::deal()
{
  while (deck.begin() != deck.end())
  {
    player1.push_front(deck.front());
    deck.pop_front();
    player2.push_front(deck.front());
    deck.pop_front();   
  }
}

//returns top card
Card Game::pop(std::deque<Card>& playersDeck)
{
  Card temp = playersDeck.front();
  playersDeck.pop_front();
  return temp;
}






