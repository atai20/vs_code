#include <string>
#include <cmath>

class PhysObj {
    
    public:
        double x;
        double y;
        int time;
        double mass;
        PhysObj(double new_x, double new_y, int new_time, double new_mass);
        void force(double direction, double val){
            x += cos(direction)*val;
            y += sin(direction)*val;
        };
        
};