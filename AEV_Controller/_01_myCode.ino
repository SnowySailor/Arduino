void myCode() {
    //Reverse motors
    reverse(4);
    //Set both motors to 25
    setBoth(25);
    goToRelativePosition(800);
    stop();
    goFor(4);
    reverse(4);
    setBoth(25);
    goToRelativePosition(-800);
    stop();
}

void setBoth(int speed) {
    motorSpeed(1,speed);
    motorSpeed(2,speed);
}


void stop() {
    //Reverse the direction of motors.
    reverse(4);
    //Set both motors to 30
    setBoth(30);
    //While the AEV hasn't stopped
    while(!(getVehicleDirection() == 2)) {
        //Do literally nothing
    }
    //Stop motors once it is stopped.
    brake(4);
}
