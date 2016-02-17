void myCode() {
    //Accelerate
    setBot(20);
    goToRelativePosition(505);
    brake(4);
} // DO NOT REMOVE. end of void myCode()

void setBoth(int speed) {
    motorSpeed(1,speed);
    motorSpeed(2,speed);
}
