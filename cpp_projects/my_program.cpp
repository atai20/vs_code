#include <iostream>
#include "PhysObj.hpp"
#include <cmath>

int main(){
    PhysObj atest(1, 2, 3, 4);
    std::cout<<"x = "<<atest.x<<", y = "<<atest.y<<"; ";
    atest.force(M_PI, 1);
    std::cout<<"x = "<<atest.x<<", y = "<<atest.y;
}