#include "Intakes.hpp"
#include "api.h"
#include "main.h"
#include "pros/misc.h"
#include "SETTINGS.hpp"
#include "Ports.hpp"

void intake_control(){
    bool intakeActive = false;
    while(intakeActive == true) {
        if (master.get_digital(pros::E_CONTROLLER_DIGITAL_L2)) {
            intakeMotor.move_velocity(600);
        }
        intakeActive = !intakeActive;
    }
}