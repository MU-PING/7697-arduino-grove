#include <Grove_LED_Bar.h> //引入headfile

int i;

// Grove_LED 上的 DI 是 data pin ; DCKI 是 clock pin
// 以下函式設定 P5 為 Clock Pin ； P4 為 Data Pin ； Orientation 表示燈條顯示方向
// 提醒：接線時必須符合程式的設定，不然無法運作 P5必須接在DCKI；P4必須接在DI

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
