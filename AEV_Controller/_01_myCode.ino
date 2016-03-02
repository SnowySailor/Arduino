void myCode() {
    //Accelerate
    reverse(4);
    setBoth(25);
    goToRelativePosition(-290);
    reverse(4);
    setBoth(20);
    goFor(1);
    goToRelativePosition(290);
    reverse(4);
    //int direction = getVehicleDirection();
    //stop(direction);
    setBoth(35);
    goFor(1.5);
    brake(4);
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
