// State.h

#ifndef _STATE_H_
#define _STATE_H_

#include <initializer_list>

class State { 
  // the values of the state variables
  double* values;
  // the number of variables in the state
  size_t numValues;

 public:
  State(size_t numValues, std::initializer_list<double> var_args) {
    this->numValues = numValues;
    values = new double[numValues]();
    size_t count = 0;
    for (auto i: var_args) {
      values[count] = i;
      count++;
    }
  } // end of constructor

  // destructor for the State
  ~State() {
    delete values;
  }

  double getIthStateVar(size_t index) {
    return values[index];
  }

  void setIthStateVar(size_t index,double newValue) {
    values[index] = newValue;
  }

};


#endif  // _STATE_H_
