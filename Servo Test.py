#!/usr/bin/env python3
#-- coding: utf-8 --
import RPi.GPIO as GPIO
import time

#Set function to calculate percent from angle
def angle_to_percent (angle) :
    if angle > 180 or angle < 0 :
        return False

    start = 4
    end = 12.5
    ratio = (end - start)/180 #Calcul ratio from angle to percent

    angle_as_percent = angle * ratio

    return start + angle_as_percent


GPIO.setmode(GPIO.BOARD) #Use Board numerotation mode
GPIO.setwarnings(False) #Disable warnings

def wave(pin):
    frequence = 50
    GPIO.setup(pin, GPIO.OUT)
    pwm = GPIO.PWM(pin, frequence)
    hold = 0.1

    pwm.start(angle_to_percent(0))
    time.sleep(hold)
    pwm.start(angle_to_percent(22))
    time.sleep(hold)
    pwm.start(angle_to_percent(45))
    time.sleep(hold)
    pwm.start(angle_to_percent(69))
    time.sleep(hold)
    pwm.start(angle_to_percent(90))
    time.sleep(hold)
    pwm.start(angle_to_percent(90 + 22))
    time.sleep(hold)
    pwm.start(angle_to_percent(135))
    time.sleep(hold)
    pwm.start(angle_to_percent(135 + 24))
    time.sleep(hold)
    pwm.start(angle_to_percent(180))
    time.sleep(hold + 0.1)
    pwm.start(angle_to_percent(135 + 22))
    time.sleep(hold)
    pwm.start(angle_to_percent(135))
    time.sleep(hold)
    pwm.start(angle_to_percent(90 + 24))
    time.sleep(hold)
    pwm.start(angle_to_percent(90))
    time.sleep(hold)
    pwm.start(angle_to_percent(45 + 22))
    time.sleep(hold)
    pwm.start(angle_to_percent(45))
    time.sleep(hold)
    pwm.start(angle_to_percent(22))
    time.sleep(hold)
    pwm.start(angle_to_percent(0))
    pwm.stop()
    GPIO.cleanup()
    GPIO.setmode(GPIO.BOARD)
    GPIO.setwarnings(False)

wave(12)
wave(32)