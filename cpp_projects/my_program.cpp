#include <iostream>
#include "PhysObj.hpp"
#include "all_forces.hpp"
#include <cmath>

int main(){
    PhysObj atest(1, 2, 3, 4);
    std::cout<<"x = "<<atest.x<<", y = "<<atest.y<<"; ";
    atest.force(M_PI/2, 1);
    std::cout<<"x = "<<atest.x<<", y = "<<atest.y;
    atest = all_forces(atest).gravity(12);
    std::cout<<"x = "<<atest.x<<", y = "<<atest.y;
    
}