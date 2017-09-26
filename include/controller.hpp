#pragma once
#include <iostream>

class Controller {
  double kp, kd, ki, pre_err;
 public:
  double time_step;
  double des_vel, cur_vel;
  double sum_err;

  Controller(double des_v, double cur_v)
      : kp(5),
        kd(1),
        ki(1),
        time_step(0.1),
        pre_err(2),
        sum_err(5),
        des_vel(des_v),
        cur_vel(cur_v) {
  }

  Controller(double des_v, double cur_v, double pre_e, double sum_e)
      : kp(5),
        kd(1),
        ki(1),
        pre_err(pre_e),
        sum_err(sum_e),
        des_vel(des_v),
        cur_vel(cur_v),
        time_step(0.1){
  }

  double compute_error();
  double compute_vel();
//  double get_cum_err(){return sum_err;}
//  double get_time(){ return time;}
//  void set_pre_err(double pre_e){pre_err = pre_e;}
//  void set_sum_err(double sum_e){sum_err = sum_e;}
//  void set_des_vel(double des_v){des_vel = des_v;}
//  void set_cur_vel(double cur_v){cur_vel = cur_v;}
//  void set_time(double t){time = t;}

};
//double p, double d, double i, double t, double pre_e,
//            double goal_v, double cur_v
