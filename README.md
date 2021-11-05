# 7697-arduino-grove
## 程式簡介
### 簡述
> Grove元件有很多種，此處以 Grove LED 燈條當作範例，程式碼：main.ino

* 使用 Grove Breakout 當作擴充版
* 外接 Grove LED 燈條，並使其閃爍

### 使用材料
* USB線
* LinkIt7697
* Grove Breakout
* Grove LED

### 電路圖
* LED 燈條是數位訊號輸出，可以接 D2/D3/D4/D10/D12 的 Grove Breakout 連接埠  
 <img src="https://user-images.githubusercontent.com/93152909/140545284-620af49e-4693-4a10-a64b-092f20e864c6.png" width="400px">

### 範例圖
<img src="https://user-images.githubusercontent.com/93152909/140546806-9c10032d-5235-4241-bf90-1e08241c03f7.gif" width="500px">

## Grove
### Grove周邊驅動程式------------------------------------------------------------
> 如果下載「Arduino IDE」 或 「已包含 Arduino IDE 的 Blockyduino」 可省略本步驟
* 可網路下載 或是 下載repository中的：linkit-7697-peripheral-drivers-for-arduino-1.2.zip
<img src="https://user-images.githubusercontent.com/93152909/140541340-a2c3f629-b896-433e-ac71-f7342459555a.png" width="800px">
<img src="https://user-images.githubusercontent.com/93152909/140541503-3c723c84-ec42-47d4-986c-232e2e089d59.png" width="800px">

### Grove Breakout------------------------------------------------------------
* 擴充版的一種，可以方便開發人員使用 Grove 元件
* Grove 元件在連接時，需要注意 Pin 的位置，因為線是固定方向的插法，需要軟體配合硬體，例如：main.ino
```C++
Grove_LED_Bar _bar2(5, 4, 0); //Clock Pin, Data Pin, Orientation

// 其函式設定 P5 為 Clock Pin ； P4 為 Data Pin
// 而Grove_LED 上的 DI 是 data pin ; DCKI 是 clock pin
// 所以接線時必須注意 P5 要接到 DCKI；P4 要接到 DI
```

* 7697插入擴充板時，請確認腳位
<img src="https://user-images.githubusercontent.com/93152909/140541790-3dfcda81-1692-436a-8e95-7f267ff5e185.png" width="800px">

## Grove 元件應用補充
> 補充其他 Grove 元件應用，並附上原始碼

* Grove 光感應器
* Grove 超音波測距感應器
* Grove 溫溼度感應器
* Grove 繼電器
* Grove OLED 顯示器
* Grove 伺服馬達
* Grove 九軸感應器
