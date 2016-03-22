void myCode() {
    //Reverse motors
    reverse(4);
    //Set both motors to 25
    setBoth(25);
    //Start at station
    goToRelativePosition(177);
    stop(getVehicleDirection());
    //Do hook stuff
    goFor(2);
    setBoth(25);
    
    //Go to the first stop
    goToRelativePosition(-172);
    stop(getVehicleDirection());
    goFor(2);

    //Go to second stop
    setBoth(25);
    goToRelativePosition(-270);
    stop(getVehicleDirection());
    goFor(2);

    //Stop at the end to let them off
    setBoth(29);
    goToRelativePosition(-197);
    stop(getVehicleDirection());
    goFor(4);

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
    celerate(4,0,30,1);
    //While the AEV hasn't stopped
    while(getVehicleDirection() == dir) {
        //Do literally nothing
    }
    //Stop motors once it is stopped.
    brake(4);
}


//d = 0.0124*marks