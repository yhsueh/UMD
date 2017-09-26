#include <gtest/gtest.h>
#include <controller.hpp>
#include <memory>

struct ControllerTest : testing :: Test{
  auto subject = std::make_shared<controller> (5,1);
};
TEST_F(ControllerTest, should_pass) {

  EXPECT_LT(1, 999);
}
