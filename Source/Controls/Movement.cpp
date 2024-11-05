
  #include <Movement.h>



  void movement::PosLeft()
  {
    position += MOV_MULT;
  }

  void movement::PosRight()
  {
    position -= MOV_MULT;
  }

  void movement::PosReset()
  {
    position = 0;
  }
  
  void movement::SetPosition(int16_t pos)
  {
    position = pos;
  }

  int16_t movement::GetPosition()
  {
    return position;
  }
