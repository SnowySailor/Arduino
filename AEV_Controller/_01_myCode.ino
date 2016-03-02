void myCode() {
    //Accelerate
    setBoth(20);
    goToRelativePosition(322);
    reverse(4);
    setBoth(20);
    goFor(1);
    goToRelativePosition(-322);
    brake(4);
    //int direction = getVehicleDirection();
    //stop(direction);
}

void setBoth(int speed) {
    motorSpeed(1,speed);
    motorSpeed(2,speed);
}


void stop(int dir) {
    reverse(4);
    setBoth(20);
    while(!(getVehicleDirection() == 2)) {
        //Do literally nothing
    }
    brake(4);
}