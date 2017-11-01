// Robot.h
// A robot is a construct of some system which has state, 
// can take actions, and can make observations 

#ifndef _ROBOT_H_
#define _ROBOT_H_

#include "../Estimation/State.h"

class Robot{
 protected:
  State* s;
  
 public: 
  
  // constructor
  Robot(){
    // TODO
  }
    
  // destructor
  ~Robot() { 
    // TODO
  }

  // TODO add sensors
  // TODO add motion/actions 
};

#endif  // _ROBOT_H_
