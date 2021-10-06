import random

integer = round(random.random() * 295147905179352825856)

def isNum(num):
    return num % 2

newInt = integer % 2
startingNum = integer

while True:
    newInt = integer % 2
    if newInt == 0:
        integer = integer / 2

    if newInt == 1:
        integer = integer * 3 + 1

    if integer == 1:
        print(f'Finished! Started with {startingNum}')
        break

    print(integer)
