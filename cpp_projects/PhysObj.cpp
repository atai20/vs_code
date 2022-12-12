#include <cmath>
#include "PhysObj.hpp"
#include <vector>

PhysObj::PhysObj(double new_x, double new_y, int new_time, double new_mass)
:x(new_x), y(new_y), time(new_time), mass(new_mass){}



std::vector<int> coordinates = {x, y};


void force(double direction, double val){
    x = sin(direction)*val*time;
    y = cos(direction)*val*time;
}




