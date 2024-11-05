// Movement.h
// This header file defines the Movement class, which provides basic position manipulation
// methods. The class includes functions to increment, decrement, reset, and retrieve the 
// current position value. Position adjustments are handled by a constant multiplier (MOV_MULT).
// The axis is a left to right positive cartesian axis
//NS


#ifndef MOVEMENT_H_
#define MOVEMENT_H_

#include <stdint.h>

class movement
{
  public:
  virtual void PosLeft();

  virtual void PosRight();

  virtual void PosReset();
  
  virtual void SetPosition(int16_t pos);

  virtual int16_t GetPosition();
  
  private:
  static const int8_t MOV_MULT = 1;
  int16_t position = 0;
};

#endif //MOVEMENT_H_