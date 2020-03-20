
#ifndef HAND_H
#define HAND_H
#include "CARD.h"

#include <string>
#include <vector>

using namespace std;

/**
  * class HAND
  * 
  */

class HAND
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  HAND();

  /**
   * Empty Destructor
   */
  virtual ~HAND();

  // Static Public attributes
  //  

  // Public attributes
  //  

  vector<CARD> cards;


  /**
   * @return bool
   */
  bool high_card()
  {
  }


  /**
   * @return bool
   */
  bool one_pair()
  {
  }


  /**
   * @return bool
   */
  bool two_pair()
  {
  }


  /**
   * @return bool
   */
  bool three_of_a_kind()
  {
  }


  /**
   * @return bool
   */
  bool straight()
  {
  }


  /**
   * @return bool
   */
  bool flush()
  {
  }


  /**
   * @return bool
   */
  bool full_house()
  {
  }


  /**
   * @return bool
   */
  bool four_of_a_kind()
  {
  }


  /**
   * @return bool
   */
  bool straight_flush()
  {
  }


  /**
   * @return bool
   */
  bool royal_flush()
  {
  }


private:
  
  CARD card;

  


};

#endif // HAND_H
