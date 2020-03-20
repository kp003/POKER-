
#ifndef DEALER_H
#define DEALER_H
#include "CARD.h"

#include <string>
#include <vector>
#include <iostream>


using namespace std;
/**
  * class DEALER
  * 
  */

class DEALER
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  DEALER();

  /**
   * Empty Destructor
   */
  virtual ~DEALER();

  // Static Public attributes
  //  

  // Public attributes
  //  

  string color;
  vector<CARD> cardlists;

  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


  /**
   * Set the value of color
   * @param new_var the new value of color
   */
  void setColor(string new_var)
  {
    color = new_var;
  }

  /**
   * Get the value of color
   * @return the value of color
   */
  string getColor()
  {
    return color;
  }

  /**
   * Set the value of cardlists
   * @param new_var the new value of cardlists
   */
  void setCardlists(vector<CARD> new_var)
  {
    cardlists = new_var;
  }

  /**
   * Get the value of cardlists
   * @return the value of cardlists
   */
  vector<CARD> getCardlists()
  {
    return cardlists;
  }


  /**
   */
  void shuffles()
  {
  }


  /**
   * @return CARD
   */
  CARD deal()
  {
  }


  /**
   */
  void card_exchange()
  {
  }


  /**
   */
  void decide_hand()
  {
  }


  /**
   */
  void show_hand()
  {
  }


  /**
   * @param  player
   */
  void kickout()
  {
  }


  /**
   */
  void show_winner()
  {
  }

//  


  
};

#endif // DEALER_H
