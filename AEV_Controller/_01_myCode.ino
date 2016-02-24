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


// void stop(int dir) {
//     reverse(4);
//     setBoth(20);
//     int positions[5] = {0,0,0,0,0};
//     while(!hasStopped(positions)) {
//         goFor(0.06);
//         int newPos = getVehiclePostion();
//         positions[4] = positions[3];
//         positions[3] = positions[2];
//         positions[2] = positions[1];
//         positions[1] = positions[0];
//         positions[0] = newPos;
//         return pos;
//     }
//     brake(4);
// }

// bool hasStopped(int positions[]) {
//     if(positions[2] > positions[5] && positions[2] < positions[0]) {
//         return true;
//     }
//     return false;
// }