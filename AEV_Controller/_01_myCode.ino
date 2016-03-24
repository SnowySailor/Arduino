void myCode() {
    //Reverse motors
    //Set both motors to 25
    setBoth(25);
    //Start at station
    goToRelativePosition(157);
    stop(getVehicleDirection());
    //Do hook stuff
    goFor(2);
    setBoth(25);
    
    //Go to the first stop
    goToRelativePosition(-152);
    stop(getVehicleDirection());
    goFor(2);

    //Go to second stop
    reverse(4);
    setBoth(25);
    goToRelativePosition(-260);
    stop(getVehicleDirection());
    goFor(2);

    //Stop at the end to let them off
    reverse(4);
    setBoth(35);
    goToRelativePosition(-247);
    stop(getVehicleDirection());
    goFor(4);

    //Go to third stop
    setBoth(17);
    goToRelativePosition(120);
    stop(getVehicleDirection());
    goFor(2);

    //Go to GC
    reverse(4);
    setBoth(20);
    goToRelativePosition(422);
    stop(getVehicleDirection());
    goFor(2);

    //Go to maintenance station
    setBoth(25);
    goToRelativePosition(-152);
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
    setBoth(30);
    //While the AEV hasn't stopped
    int nums[2];
    int start = 0;
    while(getVehicleDirection() == dir && getVehicleDirection() == dir) {
        //Do literally nothing
        if(dir == 2) {
          break;
        }
    }
    //Stop motors once it is stopped.
    brake(4);
}


//d = 0.0124*marks
