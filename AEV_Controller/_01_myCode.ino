void myCode() {
    //Reverse motors
    reverse(4);
    //Set both motors to 25
    setBoth(25);
    //Go to the end of the track
    goToRelativePosition(-290);
    //Reverse the motors
    reverse(4);
    //Set them both to 20 to reverse direction
    setBoth(20);
    //Go for 1 second.
    goFor(1);
    //Go back to the origin
    goToRelativePosition(290);
    //Reverse the motors
    reverse(4);
    //int direction = getVehicleDirection();
    //stop(direction);
    //Speed them up to 35 to stop the AEV
    setBoth(35);
    //Go for 1.5 seconds to stop it
    goFor(1.5);
    //Stop motors.
    brake(4);
}

void setBoth(int speed) {
    motorSpeed(1,speed);
    motorSpeed(2,speed);
}


void stop(int dir) {
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
