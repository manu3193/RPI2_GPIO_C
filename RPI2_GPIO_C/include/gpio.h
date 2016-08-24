#ifndef _GPIO_H
#define _GPIO_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int pinMode(int pin, int mode);
int digitalWrite(int pin, int value);
int digitalRead(int pin);
int blink(int pin, int freq, int duration);
int unexportPin(int pin);

#endif