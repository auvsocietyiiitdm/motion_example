#include "thrustered_vehicle_motioncontroller/thrustered_vehicle_motion_controller.h"
#include <thread>
#include <chrono>

ThrusteredVehicleMotionController cholan;

int main(){
    cholan.setSurgeControlMode(OPEN_LOOP_MODE);

    while (true)
    {
        for (int  i = 0; i < 16; i++)
        {
             cholan.setSurgeThrust(20 + 5*i);
            cholan.updateThrustValues();
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
        
       

    }
    
}