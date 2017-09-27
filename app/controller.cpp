/** @file controller.cpp
 * @brief Two member functions of controller class.
 * @author Yuyu Hsueh
 *
 *  The functions should return errors and new velocity
 *
 * @date $Date: 2017/9/26 $
 *
 * Copyright 2017 Yuyu Hsueh
 */
#include <iostream>
#include "controller.hpp"

/**
 * @brief Compute current error
 * @param None
 * @return error
 */
double Controller::compute_error() {
  double error = des_vel - cur_vel;
  return error;
}

/**
 * @brief Compute new velocity using PID equation
 * @param None
 * @return new velocity
 */
double Controller::compute_vel() {
  double new_vel = kp * (this->compute_error())
      + kd * (this->compute_error() - pre_err)
      + ki * (sum_err + this->compute_error());
  return new_vel;
}

