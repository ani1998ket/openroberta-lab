// This file is automatically generated by the Open Roberta Lab.

#define ANALOG2PERCENT 0.0978

#include <math.h>
#include <MeMCore.h>
#include <Wire.h>
#include <SoftwareSerial.h>
#include <MeDrive.h>
#include <NEPODefs.h>
#include <RobertaFunctions.h>

MeIR _meIr;
RobertaFunctions rob;

String header;
String temp;

void setup()
{
    Serial.begin(9600); 
    header = "my_message: ";
    temp = "";
}

void loop()
{
    for (int i = 1; i < 10; i += 1) {
        _meIr.sendString(header);
        temp += String(i);
        _meIr.sendString("number is: ");
        _meIr.sendString(temp);
        delay(1);
    }
    for (int j = 1; j < 10; j += 1) {
        temp = _meIr.getString();
        Serial.println(temp);
        delay(1);
    }
}