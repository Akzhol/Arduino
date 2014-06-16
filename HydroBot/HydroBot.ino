/*
HydroBot
@author Akzhol Imangaliyev
@version 1.0

HydroBot is a side project aimed to
automate the process of watering plants in the house.

Overall schematics and user scenario can be accessed
via *.link

In the future, the system could be more user-friendly
like, having a display with messages of actions
16/06/14 Astana, Kazakhstan
*/
int pins[] = {2,3,4};
long day = 24*3600000; //ms in 1 hour
void setup(){
  for(int i = 0; i < sizeof(pins); i++){
    pinMode(pins[i], OUTPUT);
  }
}

void loop(){
  if(wlok){
    if(!wslok){
      wp(pins[2]);
    }else{
      //check again
    }
  }else{
    //refill the tank!
  }
}

/*
check water level in reservoir
wlok = water level ok
*/
boolean wlok(){
  int wl = analogRead(pins[0]);
  if(wl > 100){
    return true;
  }else{
    return false;
  }
}

/*
check if moisture level of plant soil
is ok, if it is, return TRUE,
else -  return FALSE
wslok = water soil level ok
*/
boolean wslok(){
  int wsl = analogRead(pins[1]);
  if(wsl > 100){
    return true;
  }else{
    return false;
  }
}

/*
water the plant
*/
void wp(int pin){
  digitalWrite(pin, HIGH);
  delay(5000);
  digitalWrite(pin, LOW);
}

/*
log the date and time of watering
*/
boolean logDt(){
  return true;
}
/*
send notification via wireless adapter to
mobile device
*/
boolean sn(){
  return true;
}
