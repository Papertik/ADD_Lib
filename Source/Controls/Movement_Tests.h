#include <gtest/gtest.h>
#include <Movement.h>

#ifndef _MOVEMENT_TESTS_H_
#define _MOVEMENT_TESTS_H_


movement Movement;
TEST(movement_test, moveleft)
{
  Movement.SetPosition(12);

  for(uint8_t i = 0; i<20; i++)
  {
    Movement.PosLeft();
  }
  EXPECT_EQ(12+20, Movement.GetPosition());
}

TEST(movement_test, moveright)
{
    Movement.SetPosition(12);

  for(uint8_t i = 0; i<20; i++)
  {
    Movement.PosRight();
  }
  EXPECT_EQ(12-20, Movement.GetPosition());
}

TEST(movement_test, resetmove)
{
  Movement.SetPosition(12);

  Movement.PosReset();

  EXPECT_EQ(0,Movement.GetPosition());

}
#endif //_MOVEMENT_TESTS_H_