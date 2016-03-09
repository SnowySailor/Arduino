void myCode() {
    //Reverse motors
    reverse(4);
    //Set both motors to 25
    setBoth(25);
    goToRelativePosition(-800);
    stop(getVehicleDirection());
    goFor(4);
    setBoth(25);
    goToRelativePosition(800);
    stop(getVehicleDirection());
}

void setBoth(int speed) {
    motorSpeed(1,speed);
    motorSpeed(2,speed);
}


void stop(int dir) {
    setBoth(0);
    //Reverse the direction of motors.
    reverse(4);
    //Set both motors to 30
    celerate(4,0,30,1.5);
    //While the AEV hasn't stopped
    while(getVehicleDirection() != dir) {
        //Do literally nothing
    }
    //Stop motors once it is stopped.
    brake(4);
}
