import math
import random

lines = []
for i in range(1, 10000, 17):
    new_value = (i + (i*76))% 1.5 + random.randint(25, 79) 

    lines.append("{}\n".format(str(new_value)))
    print(new_value)
file = open("data.txt", "x")
file.writelines(lines)
file.close


