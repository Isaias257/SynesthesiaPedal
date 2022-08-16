#include "SENSORSETUP.h"
#include "FILLSOLID.h"

int threshhold = 50;

/* DECLARATION OF OBJECTS TO ACCESS THEIR RESPECTIVE FUNCTIONS */
SENSORSETUP sensorsetup;
FILLSOLID fillsolid;
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

void setup() {sensorsetup.setupsensor();} 

void loop() 
{
 if (sensorsetup.get_value0() > threshhold){
   fillsolid.red();
 }
 else if (sensorsetup.get_value1() > threshhold){
  fillsolid.redsparklebuild();
  }

 else if (sensorsetup.get_value2() > threshhold){
   fillsolid.redsparklefade();
 }
 else if (sensorsetup.get_value3() > threshhold){
  fillsolid.whitesparklefade();
  }
 else if (sensorsetup.get_value4() > threshhold){
  fillsolid.redwhitesparklefade();
  }
 else{
  fillsolid.fadetoblackby(100);
  }

}
