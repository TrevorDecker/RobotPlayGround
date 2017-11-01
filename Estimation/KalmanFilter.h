// KalmanFilter.h
// Written by Trevor Decker

// TODO think about makeing this a templated class, and removing pointers

#ifndef _KALMAN_FILTER_H_
#define _KALMAN_FILTER_H_

#include "State.h"

class KalmanFilter {
 private: 
  
  // State Estimation
  State* s;

  // Covariance
 
 public:
  //constructor
  KalmanFilter() { 
    // TODO
  }

  //destructor
  ~KalmanFilter() { 
    // TODO
  }

  // predictTo()

  // observe()

  // getStateEstimate
  State* getStateEstimate() { 
    return s;
  }

  // getConfidence

};

#endif  // _KALMAN_FILTER_H_
