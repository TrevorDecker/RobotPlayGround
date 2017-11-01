// PointRobot.h
// Written by Trevor Decker
// repersents a robot as a single point

#ifndef _POINT_ROBOT_H_
#define _POINT_ROBOT_H_

#include "Robot.h"
#include <math.h>

class PointRobot : public Robot { 
 public:
  // constructor
  PointRobot(double xStart, double yStart, double thStart) { 
    s = new State(3,{xStart,yStart,thStart});
  }

  // destructor 
  ~PointRobot() { 
    delete s;
  }

  void move(double foward, double turn) { 
    double x = s->getIthStateVar(0);
    double y = s->getIthStateVar(1);
    double th = s->getIthStateVar(2);
    
    th = th + turn/2.0;  // execute half the turn
    x = x + cos(turn)*foward;
    y = y + sin(turn)*foward;
    th = th + turn/2.0;  // execute the other half turn

    s->setIthStateVar(0,x);
    s->setIthStateVar(1,y);
    s->setIthStateVar(2,th);
  }

  std::string toString() { 
    return "x:"+std::to_string(s->getIthStateVar(0))+"y:"+std::to_string(s->getIthStateVar(1))+"th:"+std::to_string(s->getIthStateVar(2));
  }

  /////////////////////////////////////////////////////////////////////////////////////////////
  // TODO consider moving this following peice to another robot or use a design pattern that can handle interchanging what a robot has
  
  // TODO add landmark observation
  // TODO add gps
  // TODO add odomatry 


};

#endif  // _POINT_ROBOT_H_
