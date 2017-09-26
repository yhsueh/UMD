/** @file controller.h
 * @brief Controller class.
 * @author Yuyu Hsueh
 *
 * The class contains kp, kd, ki private members, which are
 * predetermined to be 5,1,1.
 * Two constructors are available, per_err and sum_err are
 * assumed to be 2 and 5 if no arguments are passed in.
 */
#pragma once
#include <iostream>

class Controller {
  double kp, kd, ki; /**< kp,kd,ki controller gains*/
 public:
  double des_vel, cur_vel; /**< Velocities are input by users/code */
  double sum_err, pre_err; /**< Derivative and Integral terms are also entered by users/code */

  /// Create and initialize a controller class with velocities
  Controller(double des_v, double cur_v)
      : kp(5),
        kd(1),
        ki(1),
        pre_err(2),
        sum_err(5),
        des_vel(des_v),
        cur_vel(cur_v) {
  }

  /// Create and initialize a controller class with velocities and errors
  Controller(double des_v, double cur_v, double pre_e, double sum_e)
      : kp(5),
        kd(1),
        ki(1),
        pre_err(pre_e),
        sum_err(sum_e),
        des_vel(des_v),
        cur_vel(cur_v){
  }

  /** @brief Compute Error Method.
    * @param None
    * @return A double typed error
    */
  double compute_error();

  /** @brief Compute new velocity.
    * @param None
    * @return A double typed velocity
    */
  double compute_vel();

};
