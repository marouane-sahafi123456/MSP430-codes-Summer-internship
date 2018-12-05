#include "Energia.h"

#line 1 "C:/Users/Admin/workspace_v8/2018_08_05_newProject_EnergiaMPU6050/2018_08_05_newProject_EnergiaMPU6050.ino"








#include <Wire.h>
#include <MPU6050.h>
#include <Servo.h>

void setup();
void loop();

#line 13
MPU6050 mpu;
Servo sg90;


unsigned long timer = 0;
float timeStep = 0.01;


float pitch = 0;
float roll = 0;
float yaw = 0;


void setup()
{
  sg90.attach (11);
  Wire.begin();
  Serial.begin(115200);

  
  while(!mpu.begin(MPU6050_SCALE_2000DPS, MPU6050_RANGE_2G))
  {
    Serial.println("Could not find a valid MPU6050 sensor, check wiring!");
    delay(500);
  }
  
  
  
  mpu.calibrateGyro();

  
  
  
}

void loop()
{
  timer = millis();

  
  Vector norm = mpu.readNormalizeGyro();

  
  pitch = pitch + norm.YAxis * timeStep;
  roll = roll + norm.XAxis * timeStep;
  yaw = yaw + norm.ZAxis * timeStep;



  
  Serial.print(" Pitch = ");
  Serial.print(pitch);
  Serial.print(" Roll = ");
  Serial.print(roll);
  Serial.print(" Yaw = ");
  Serial.println(yaw);

  sg90.write (yaw);

  
  delay((timeStep*1000) - (millis() - timer));
}



