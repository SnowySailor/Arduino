void myCode() {
    //Reverse motors
    //Set both motors to 25
    int speed = 23;
    setBoth(speed);
    //Start at station
    goToRelativePosition(147);
    stop(getVehicleDirection(), true);
    //Do hook stuff
    goFor(2);
    setBoth(speed);
   
    //Go to the first stop
    goToRelativePosition(-152);
    stop(getVehicleDirection(), true);
    goFor(2);

    //Go to second stop
    reverse(4);
    setBoth(speed);
    goToRelativePosition(-280);
    stop(getVehicleDirection(), true);
    goFor(2);

    //Stop at the end to let them off
    reverse(4);
    setBoth(speed+15);
    goToRelativePosition(-187);
    stop(getVehicleDirection(), true);
    reverse(4);
    setBoth(12);
    goFor(4);
    reverse(4);

    //Go to third stop
    setBoth(17);
    goToRelativePosition(120);
    stop(getVehicleDirection(), false);
    goFor(2);

    //Go to GC
    reverse(4);
    setBoth(speed);
    goToRelativePosition(399);
    stop(getVehicleDirection(), true);
    goFor(2);

    //Go to maintenance station
    setBoth(speed);
    goToRelativePosition(-152);
    stop(getVehicleDirection(), true);
}

void setBoth(int speed) {
    motorSpeed(1,speed);
    motorSpeed(2,speed);
}


void stop(int dir, boolean thing) {
    setBoth(0);
    //Reverse the direction of motors.
    reverse(4);
    //Set both motors to 30
    setBoth(30);
    //While the AEV hasn't stopped
    int start = 0;
    while(getVehicleDirection() == dir && getVehicleDirection() == dir) {
        //Do literally nothing
    }
    //Stop motors once it is stopped.
    brake(4);
    if(thing) {
        reverse(4);
        setBoth(40);
        goFor(0.45);
        reverse(4);
    }
    brake(4);
   
}


//d = 0.0124*marks
