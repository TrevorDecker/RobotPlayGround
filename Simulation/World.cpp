// world.cpp
// Written by Trevor Decker

// The world class provides an interface for a user to interact with the simulator from, The world class is implemented as a singelton

#include <stddef.h>
#include <vector>
#include "Object.h"

class World{
  
private:
  
  // the single copy of the world which is held internally so that when it is accessed it is gurenteed to already have been created
  static World* worldPointer;

  // stores the elements that are a part of the world
  std::vector<Object> objectList;

  // constructor for the world
  World(){
  

  }

public:
  static World* getWorld() {
    if (worldPointer == NULL) {
      worldPointer = new World();
    }
    return worldPointer;
  }

  // adds a new object to the world so that it can be tracked
  void addObject(Object& newObject) {
    // TODO
  }

  bool removeObject(Object* objectToRemove) {
    // TODO
  }

  // TODO add some geters and equality 
  // TODO add a drawing class that I can use to have a basic display

};
