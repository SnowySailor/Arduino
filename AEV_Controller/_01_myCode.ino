void myCode() {
    //Reset servo
    rotateServo(90);
    //Reverse motors
    //Set both motors to 23
    int speed = 23;
    setBoth(speed);
    //Start at station
    goToRelativePosition(147);
    stop(getVehicleDirection(), true);
    //Do hook stuff
    goFor(4);
    //Lower servo to grab cart
    rotateServo(0);
    //Pause to let thigns settle
    goFor(2);
    //Proceed
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
    correct(450);
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
    goToRelativePosition(126);
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
  int speed = 23; 
    setBoth(0);
    //Reverse the direction of motors.
    reverse(4);
    //Set both motors to 30
    setBoth(speed+7);
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

void correct(int loc) {
    int pos = getVehiclePosition();
    int diff = pos - loc;
    int direction = getMotorDirection(1);
    
    if(diff >= 5) {
        if(diff > 0) {
            setBoth(sqrt(diff)*2);
            goFor(1);
            correct(loc);
        } else {
            setBoth(sqrt(diff)*2);
            goFor(1);
            correct(loc);
        }
    }
    stop(getVehicleDirection(), false);
}


//d = 0.0124*marks
