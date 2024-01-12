import pyautogui
import time

def func(lvl):
    time.sleep(5)
    for i in range(1, lvl + 1):
        symbol = "#" * i
        pyautogui.write(symbol + '\n')
        time.sleep(0.1)

n = input("Enter the number of level for the right half pyramid: ")

try:
    lvl = int(n)
    func(lvl)
    
except ValueError:
    print("Please enter a valid number!!")