/** @file main.cpp
* @brief A Documented file.
*
* This program will compute the velocity output of
* a PID controller with given actual velocity, desired velocity
*/
#include <iostream>
#include <memory>
#include "controller.hpp"

int main( )
{
    double curr_v = 4;
    double des_v = 10;
    double new_v,new_err;

    Controller PID (des_v,new_v);
    new_err = PID.compute_error();
    new_v = PID.compute_vel();
    std::cout << "New Velocity is " << new_v << std::endl;
}

