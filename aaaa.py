import random
import time

while True:
    time.sleep(0.4)
    with open('', 'w') as f:
        f.write(str(random.randint(1, 100)))
