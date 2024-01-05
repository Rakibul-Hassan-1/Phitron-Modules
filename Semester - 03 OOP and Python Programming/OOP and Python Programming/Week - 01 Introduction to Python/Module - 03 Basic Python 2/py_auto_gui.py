import pyautogui as py
from time import sleep
sleep(5)
# print('Hello world')
for i in range(0,3):
    py.write("Kire ki obotha tor, eta python nije likhse msg. Pyautogui libray use kore", interval=0.30)
    py.press('enter')