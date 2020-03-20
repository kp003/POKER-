
#ifndef SPECTATOR_H
#define SPECTATOR_H

#include <string>


/**
  * class SPECTATOR
  * 
  */

class SPECTATOR
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  SPECTATOR();

  /**
   * Empty Destructor
   */
  virtual ~SPECTATOR();

  

  int wait_no;



  /**
   */
  void leave()
  {
  }


  /**
   * @return string
   */
  string show_waitlist()
  {
  }

protected:
  // Static Protected attributes
  //  

  // Protected attributes
  //  

  Gtk::Label waitlistno;
  Gtk::Button Leave;



  

private:
  
  string userid;
  string password;


 


};

#endif // SPECTATOR_H
