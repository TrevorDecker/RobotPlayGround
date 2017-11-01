// PID.h
// Written by Trevor Decker
// this class contains a PID controller which does some combination of a proportional, Integral, or  Derivative controller

  // A future extension of this controller could be to add feed foward
  // it would also be nice to have this controller expand into a general purpose controller block digram frame work 
  // it would also be worth exploreing continues time implementaions

#ifndef _PID_H_
#define _PID_H_

#include "PID.h"

class PID{
 private:

  // will have a function which reports the current error 
  
  // the proportional term of the controller
  double p;
  
  // the derivative term of the controller
  double d;

  // the integral term of the controller
  double i;

  // a ringbuffer which is used to calculate what the error of each dimension is 
  double* errors; // a buffer for storeing recent errors that we have observed
  int errorBufferLength; // the number of elements that the buffer has been defined for 
  int errorBufferPoint; // where we are in the error buffer

  // we have two options for how the pid controller can get information, sensors could send it information or it can pull information from the world or wait for a callback
  // TODO figure out how to get information in


 public:

  PID(double p, double i, double d) {
    // TODO add interface for controlling an actuator, and getting sensor information back
    this->p = p;
    this->d = d;
    this->i = i;
    
  }

};

#endif  // _PID_H_
