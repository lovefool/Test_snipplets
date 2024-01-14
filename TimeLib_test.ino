// Wemos D1 mini: TimeLib adjustTime test
// 2024.01.14

#include <TimeLib.h> //https://playground.arduino.cc/Code/Time/

#define time_offset 32400    // UTC+9時間(3600 * 9 秒）

void setup()
{
  delay(500);
  Serial.begin(9600);
  delay(500);
  Serial.println("Test start");

  //  setTime(gps.time.hour(), gps.time.minute(), gps.time.second(), gps.date.day(), gps.date.month(), gps.date.year());
  setTime(0, 0, 0, 14, 1, 2014);
  // adjustTime(time_offset);   //JST変換

  Serial.println("JST");
  Serial.print(year());
  Serial.print(month());
  Serial.print(day());
  Serial.print(" ");
  Serial.print(hour());
  Serial.print(minute());
  Serial.println(second());
}

void loop(){
  adjustTime(time_offset);   //JST変換

  Serial.println("JST after adjust");
  Serial.print(year());
  Serial.print(month());
  Serial.print(day());
  Serial.print(" ");
  Serial.print(hour());
  Serial.print(minute());
  Serial.println(second());
} //end of loop
