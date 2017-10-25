// PID.h
// Written by Trevor Decker
// this class contains a PID controller which does some combination of a proportional, Integral, or  Derivative controller

  // A future extension of this controller could be to add feed foward
  // it would also be nice to have this controller expand into a general purpose controller block digram frame work 
  // it would also be worth exploreing continues time implementaions

class PID{
 private:

  // the proportional term of the controller
  double p;
  
  // the derivative term of the controller
  double d;

  // the integral term of the controller
  double i;

 public:

  PID(double p, double i, double d) {
    // TODO add interface for controlling an actuator, and getting sensor information back
    this.p = p;
    this.d = d;
    this.i = i;

  }

};
