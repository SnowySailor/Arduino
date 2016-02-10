void myCode()
{
    //----------------------------------------------------------------------------------------
    // myCode();
    ///
    // This is the tab where the programming of your vehicle operation is done.
    // Tab _00_AEV_key_words contains a compiled list of functions/subroutines used for vehicle
    // operation. 
    //
    // Note:
    // (1) After running your AEV do not turn the AEV off, connect the AEV to a computer, or 
    //   push the reset button on the Arduino. There is a 13 second processing period. In 
    //   post processing, data is stored and battery recuperation takes place. 
    // (2) Time, current, voltage, total marks, position traveled are recorded approximately 
    //   every 60 milliseconds. This may vary depending on the vehicles operational tasks. 
    //   It takes approximately 35-40 milliseconds for each recording. Thus when programming,
    //   code complexity may not be beneficial. 
    // (3) Always comment your code. Debugging will be quicker and easier to do and will 
    //   especially aid the instructional team in helping you. 
    //---------------------------------------------------------------------------------------- 


    celerate(4,0,25,3);
    goFor(1);
    setBoth(20);
    goFor(2);
    reverse(4);
    setBoth(25);   
    goFor(2);
    brake(4);

} // DO NOT REMOVE. end of void myCode()

void setBoth(int speed) {
    motorSpeed(1,speed);
    motorSpeed(2,speed);
}



