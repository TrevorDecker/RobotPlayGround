// Written by Trevor Decker
// DeadReckonedRobot is an example of creating a robot in the simulator and having that robot execute a set of commands

#include <iostream>
#include "../Simulation/World.cpp"
#include "../Simulation/PointRobot.h"
#include "../Control/PID.h"
#include "../Estimation/State.h"

#include <glut.h>
#include <math.h>


void displayMe(void)
{
  /*
  glClear(GL_COLOR_BUFFER_BIT);
  glBegin(GL_POLYGON);
  glVertex3f(0.0, 0.0, 0.0);
  glVertex3f(0.5, 0.0, 0.0);
  glVertex3f(0.5, 0.5, 0.0);
  glVertex3f(0.0, 0.5, 0.0);
  glEnd();
  glFlush();
  */
}


int main(int argc, char** argv) {
  PointRobot r = PointRobot(0.0,0.0,0.0);
  for(int i = 0;i<10;i++) { 
    r.move(1.0,0.0);
    std::cout<<r.toString()<<std::endl;
  }
  
  // TODO build the robot class and collapse move into it
  
  // sets the start state
  // variable 1 is x, variable 2 is y, variable 3 is th
  //  state[0] = 0.0;
  //  state[1] = 0.0;
  //  state[2] = 0.0;


  /*
  std::cout<<"Welcome to DeadReckonedRobot"<<std::endl;
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE);
  glutInitWindowSize(300, 300);
  glutInitWindowPosition(100, 100);
  glutCreateWindow("Hello world :D");
  glutDisplayFunc(displayMe);
  glutMainLoop();
  return 0; 
  */
}

