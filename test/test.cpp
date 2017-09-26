#include <iostream>
#include <memory>
#include <gtest/gtest.h>
#include "controller.hpp"

struct ControllerTest : public :: testing :: Test{
  std::shared_ptr<Controller> subject = std::make_shared<Controller> (5,1);
};

TEST_F(ControllerTest, VelocityTest) {
  EXPECT_LT(subject->compute_vel(),999);
}

TEST_F(ControllerTest, ErroTest) {
  EXPECT_LT(subject->compute_error(),999);
}
