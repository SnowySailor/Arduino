void myCode()
{
  //----------------------------------------------------------------------------------------
  // myCode();
  //
  // This is the tab where the programming of your vehicle operation is done.
  // Tab _00_AEV_key_words contains a compiled list of functions/subroutines used for vehicle
  // operation. 
  //
  // Note:
  // (1) After running your AEV do not turn the AEV off, connect the AEV to a computer, or 
  //     push the reset button on the Arduino. There is a 13 second processing period. In 
  //     post processing, data is stored and battery recuperation takes place. 
  // (2) Time, current, voltage, total marks, position traveled are recorded approximately 
  //     every 60 milliseconds. This may vary depending on the vehicles operational tasks. 
  //     It takes approximately 35-40 milliseconds for each recording. Thus when programming,
  //     code complexity may not be beneficial. 
  // (3) Always comment your code. Debugging will be quicker and easier to do and will 
  //     especially aid the instructional team in helping you. 
  //---------------------------------------------------------------------------------------- 

  // Program between here-------------------------------------------------------------------
reverse(1);reverse(2);
setBoth(25);
goFor(2);
setBoth(20);
goToAbsolutePosition(397);
reverse(1);
reverse(2);
setBoth(30);
goFor(1.5);
brake(1);
brake(2);
 

  // And here--------------------------------------------------------------------------------

} // DO NOT REMOVE. end of void myCode()

void setBoth(int speed) {
  motorSpeed(1,speed);
  motorSpeed(2,speed);
}



