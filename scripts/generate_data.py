# import matplotlib.pyplot as plt

import math
import random

lines = []
for i in range(1, 10000, 17):
    new_value = (i + (i*76))% 1.5 + random.randint(25, 79) 

    lines.append("{}\n".format(str(new_value)))
    
file = open("data.txt", "x")
file.writelines(lines)
file.close


x=[]
y=[]

file = open("data.txt", "r")
for i, line in enumerate(file):
    x.append(i)
    y.append(float(line))

print(x)
print(y)

# fig, ax = plt.subplots()
# ax.plot(x, y)
# ax.set_title('A single plot')
# plt.show()