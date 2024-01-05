# import cv2
# cam = cv2.VideoCapture(0)
# while True:
#     _,frame = cam.read()
#     cv2.imshow("My Cam", frame)
#     cv2.waitKey(0)

import pyautogui as py
from time import sleep
sleep(5)
# print('Hello world')
for i in range(0,3):
    py.write("Kire ki obotha tor, eta python nije likhse msg. Pyautogui libray use kore", interval=0.30)
    py.press('enter')