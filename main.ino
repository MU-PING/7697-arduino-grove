#include <Grove_LED_Bar.h> //引入headfile

int i;

Grove_LED_Bar _bar2(5, 4, 0); //Clock Pin, Data Pin, Orientation

void setup() {
  _bar2.begin();
}

void loop() {
  for (i=0;i<=10;i++){
    _bar2.setLevel(i);
    delay(1000);
    }
  delay(1000);
}
