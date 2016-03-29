void myCode() {
    //Reverse motors
    //Set both motors to 25
    int speed = 23;
    setBoth(speed);
    //Start at station
    goToRelativePosition(145);
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
    goToRelativePosition(-260);
    stop(getVehicleDirection(), true);
    goFor(2);

    //Stop at the end to let them off
    reverse(4);
    setBoth(speed+15);
    goToRelativePosition(-227);
    stop(getVehicleDirection(), false);
    goFor(4);

    //Go to third stop
    setBoth(17);
    goToRelativePosition(110);
    stop(getVehicleDirection(), true);
    goFor(2);

    //Go to GC
    reverse(4);
    setBoth(speed);
    goToRelativePosition(422);
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
    while(getVehicleDirection() == dir && getVehicleDirection() == dir && getVehicleDirection() != 2) {
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
