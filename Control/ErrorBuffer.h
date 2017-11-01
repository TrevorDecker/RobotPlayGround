// ErrorBuffer.h
// An error buffer is a ring buffer that can quickly pull statistics
// about the some error signal

// for now we assume that all measerments are equally weighted and come in 
// at a fixed time interval. IE no time interpelation is being done

// TODO deal with behavior when the number of elements in the buffer is less then buffSize

#ifndef _ERROR_BUFFER_H_
#define _ERROR_BUFFER_H_

class ErrorBuffer {
  double* data;
  
  // is the location that the next insert should be placed
  size_t nextInsert;
  size_t buffSize;
    
  // class constructor
  ErrorBuffer(size_t buffSize) {
    this->data = new double[buffSize]();
    nextInsert = 0;
    this->buffSize = buffSize;
  }

  bool resize(size_t newSize){
    
    // TODO
  }

  void addElement(double reading) {
    // keeps the pointer in the ring buffer
    ErrorBuffer[nextInsert] = reading; 
    nextInsert = (nextInsert + 1) % buffSize;
  }

  double getMean() {
    // TODO look into how this can be calculated with a quicker method that
    // would only use deltas during insert instead of walking the entire array on each call
    double result = 0;
    for(size_t i = 0; i < buffSize; i++) {
      result += data[i] / double(buffSize);
    }
    
    return result;
  }

  double getVariance() { 
    // TODO
  }


};

#endif  // _ERROR_BUFFER_H_
