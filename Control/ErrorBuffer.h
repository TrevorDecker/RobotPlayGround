// ErrorBuffer.h
// An error buffer is a ring buffer that can quickly pull statistics
// about the some error signal

// for now we assume that all measerments are equally weighted and come in 
// at a fixed time interval. IE no time interpelation is being done


class ErrorBuffer {
  
  // class constructor
  ErrorBuffer(size_t buffSize) {
    // TODO
  }

  bool resize(size_t newSize){
    // TODO
  }

  void addElement(double reading) {
    // TODO
  }

  double getMean() {
    // TODO
  }

  double getVariance() { 
    // TODO
  }


};
