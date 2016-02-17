void myCode() {
    //Accelerate
    celerate(4,0,25,3);
    //Go for 1 second
    goFor(1);
    //Set both mototrs to 20
    setBoth(20);
    //Go for 2 seconds
    goFor(2);
    //Reverse both
    reverse(4);
    //Set both to 25
    setBoth(25);   
    //Go for 2 seconds
    goFor(2);
    //Stop both
    brake(4);

} // DO NOT REMOVE. end of void myCode()

void setBoth(int speed) {
    motorSpeed(1,speed);
    motorSpeed(2,speed);
}



