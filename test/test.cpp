#include <gtest/gtest.h>
#include <controller.hpp>
#include <memory>

struct ControllerTest : testing :: Test{
  std::shared_ptr<Controller> subject = std::make_shared<Controller> (5,1);
};


TEST_F(ControllerTest, should_pass) {

  EXPECT_LT(1, 999);
}

