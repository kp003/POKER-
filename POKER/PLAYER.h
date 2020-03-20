
#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include <gtkmm.h>

using namespace std;
/**
  * class PLAYER
  * 
  */

class PLAYER:public Gtk::Window
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  PLAYER();

  /**
   * Empty Destructor
   */
  virtual ~PLAYER();

  // Static Public attributes
  //  
  // Public attributes
  //  

  string color;
  int bank_amount;

  // Public attribute accessor methods
  //  


  // Public attribute accessor methods


  void exit_func()
  {
  }


  /**
   * @return int
   */
  int bet()
  {
  }


  /**
   * @return int
   */
  int call()
  {
  }


  /**
   */
  void fold()
  {
  }


  /**
   * @return int
   */
  int raises()
  {
  }


  /**
   */
  void check()
  {
  }


  /**
   */
  void joined()
  {
  }

protected:
  // Static Protected attributes
  //  

  // Protected attributes
  //  

  Gtk::Label pl_name;
  Gtk::Label pl_password;
  Gtk::Entry p_name;
  Gtk::Entry p_password;
  Gtk::Grid grid;
  Gtk::Button joins;
  Gtk::Button exit;
  Gtk::Button bet_;
  Gtk::Button call_;
  Gtk::Button fold_;
  Gtk::Button raise_;
  Gtk::Button check_;

  // Protected attribute accessor methods
  //  


  // Protected attribute accessor methods
  //  


  

};

#endif // PLAYER_H
