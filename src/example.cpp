#include "thrustered_vehicle_motioncontroller/thrustered_vehicle_motion_controller.h"
#include <thread>
#include <chrono>

ThrusteredVehicleMotionController cholan;

int main(){
    cholan.setSurgeControlMode(OPEN_LOOP_MODE);
    cholan.setSurgeThrust(0);
        cholan.updateThrustValues();
        for (int  i = 0; i < 16; i++)
        {
            cholan.refresh();
                std::this_thread::sleep_for(std::chrono::milliseconds(7));

        }

    std::this_thread::sleep_for(std::chrono::seconds(7));
     


    while (true)
    {
        for (int  i = 0; i < 16; i++)
        {
             cholan.setSurgeThrust(100);
            cholan.updateThrustValues();
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
        
       

    }
    
}