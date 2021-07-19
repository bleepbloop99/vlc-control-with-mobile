import serial #Serial imported for Serial communication
import time #Required to use delay functions
import pyautogui

ArduinoSerial=serial.Serial('com5',9600) #Create Serial port object
time.sleep(2) #wait for 2 seconds for the communication to get established

while 1:
    incoming=str(ArduinoSerial.readline()) #read the serial data
    #print incoming
    
    if 'Play/Pause' in incoming:
        pyautogui.typewrite(['space'], 0.2)

    elif 'Rewind' in incoming:
        pyautogui.hotkey('ctrl','left')  

    elif 'Forward' in incoming:
        pyautogui.hotkey('ctrl','right') 

    elif 'VolUp' in incoming:
        pyautogui.hotkey('ctrl','down')
        
    elif 'VolD' in incoming:
        pyautogui.hotkey('ctrl','up')
    incoming = ""
    