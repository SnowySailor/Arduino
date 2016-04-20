void myCode() {
    //Define the speed to be used
    int speed = 29;

    //Reset servo
    rotateServo(90);
    //Set both motors to 23
    setBoth(24);
    //Start at station
    goToRelativePosition(139);
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
    goToRelativePosition(-60);
    //Slowly go down hill
    descend(13,speed,1);
    goToRelativePosition(-20);
    //Stop the AEV
    stop(getVehicleDirection(), true);
    goFor(2);

    //Go to second stop
    reverse(4);
    setBoth(speed);
    goToRelativePosition(-292);
    //Stop the AEV
    stop(getVehicleDirection(), true);
    goFor(2);

    //Stop at the end to let them off
    reverse(4);
    //Give the AEV a lot of power to make it up the bigger hill
    setBoth(speed+20);
    goToRelativePosition(-197);
    //Stop the AEV
    stop(getVehicleDirection(), true);
    reverse(4);
    //Set both to 16 to stop the AEV from moving around on the incline
    setBoth(16);
    //Pause for 4 seconds to let people off.
    goFor(4);
    reverse(4);

    //Go to third stop
    setBoth(18);
    goToRelativePosition(51);
    //Slowly go down the hill
    descend(15,speed,0);
    goToRelativePosition(20);
    //Stop the AEV
    stop(getVehicleDirection(), false);
    goFor(2);

    //Go to GC
    reverse(4);
    setBoth(speed);
    goToRelativePosition(415);
    //Stop the AEV
    stop(getVehicleDirection(), true);
    goFor(2);
    //Release the cart
    rotateServo(90);
    goFor(1);

    //Go to maintenance station
    setBoth(23);
    goToRelativePosition(-64);
    //Slowly go down the hill
    descend(13,23,1);
    //Stop the AEV
    stop(getVehicleDirection(), true);
}

//Function to set 1 and 2 to a certain speed.
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
    //If we want to provide a kick to counteract the reversal overcorrecting.
    if(thing) {
        reverse(4);
        //Reverse both for 0.45 seconds at 40% power
        setBoth(40);
        goFor(0.45);
        reverse(4);
    }
    brake(4);
}

void descend(int sp, int original, int direction) {
    //Stop the motors and reverse them
    brake(4);
    reverse(4);
    //Set both motors to slow the AEV down
    setBoth(sp);
    int distance;
    //Check to see where we need to get to on the ramp.
    if(direction == 0) {distance = 100;} else {distance = -100;}
    goToRelativePosition(distance);
    reverse(4);
    //Set the motors back to the original once at the bottom
    setBoth(original);
}
