
#ifndef CARD_H
#define CARD_H


#include <string>

using namespace std;


class CARD
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  CARD();

  /**
   * Empty Destructor
   */
  virtual ~CARD();

   CARD(int suit, int rank)
  {
  }


  /**
   * @return string
   */
  string get_suit()
  {
  }


  /**
   * @return int
   */
  int get_rank()
  {
  }


private:

  int suit;
  int rank;


};

#endif // CARD_H
