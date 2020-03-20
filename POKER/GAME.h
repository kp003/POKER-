
#ifndef GAME_H
#define GAME_H
#include "PLAYER.h"

#include <string>
#include <vector>

using namespace std;
/**
  * class GAME
  * 
  */

class GAME
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  GAME();

  /**
   * Empty Destructor
   */
  virtual ~GAME();
  



  /**
   * @return int
   */
  int player_bank()
  {
  }


  /**
   */
  void change_round()
  {
  }


  /**
   */
  void show_round()
  {
  }


  /**
   * @return vector<PLAYERS>
   */
  vector<PLAYER> show_players()
  {
  }


  /**
   * @return int
   */
  int show_spectator_no()
  {
  }


  /**
   */
  void player_cred()
  {
  }


  /**
   */
  void start_game()
  {
  }


  /**
   */
  void end_game()
  {
  }


  /**
   */
  void update_list()
  {
  }

private:
  // Static Private attributes
  //  

  // Private attributes
  //  

  int round_no;
  int player_no;
  int spectator_no;
  //DEALER dealer;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of round_no
   * @param new_var the new value of round_no
   */
  void setRound_no(int new_var)
  {
    round_no = new_var;
  }

  /**
   * Get the value of round_no
   * @return the value of round_no
   */
  int getRound_no()
  {
    return round_no;
  }

  /**
   * Set the value of player_no
   * @param new_var the new value of player_no
   */
  void setPlayer_no(int new_var)
  {
    player_no = new_var;
  }

  /**
   * Get the value of player_no
   * @return the value of player_no
   */
  int getPlayer_no()
  {
    return player_no;
  }

  /**
   * Set the value of spectator_no
   * @param new_var the new value of spectator_no
   */
  void setSpectator_no(int new_var)
  {
    spectator_no = new_var;
  }

  /**
   * Get the value of spectator_no
   * @return the value of spectator_no
   */
  int getSpectator_no()
  {
    return spectator_no;
  }

 

 

};

#endif // GAME_H
